class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        unordered_set<int>s(nums.begin(),nums.end());
        vector<int>miss;
        for(int i=mini;i<=maxi;i++){
            if(s.find(i)==s.end())
                miss.push_back(i);
        }
        return miss;
    }
};