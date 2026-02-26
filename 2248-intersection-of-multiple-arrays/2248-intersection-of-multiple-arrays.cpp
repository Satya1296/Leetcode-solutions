class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        for(int i=0;i<nums.size();i++){
            unordered_set<int>s(nums[i].begin(),nums[i].end());
            nums[i].assign(s.begin(),s.end());
        }
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                mpp[nums[i][j]]++;
            }
        }
        vector<int>ans;
        for(auto i:mpp){
            if(i.second==nums.size()) ans.push_back(i.first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};