class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>mpp;
        for(int i=0;i<nums.size();i++) mpp[nums[i]].push_back(i);
        int ans=0;
        for(auto it:mpp){
            vector<int>a=it.second;
            if(a.size()==3){
                if(a[1]-a[0] == a[2]-a[1]) ans++;
            }
        }
        return ans;
    }
};