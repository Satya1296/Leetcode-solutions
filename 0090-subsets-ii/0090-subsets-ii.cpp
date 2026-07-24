class Solution {
public:
    vector<vector<int>>str;
    void solve(int i,vector<int>&nums,vector<int>&a){
        if(i==nums.size()){
            str.push_back(a);
            return;
        }
        a.push_back(nums[i]);
        solve(i+1,nums,a);
        a.pop_back();
        while(i+1<nums.size() && nums[i]==nums[i+1]) i++;
        solve(i+1,nums,a);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>a;
        solve(0,nums,a);
        return str;
    }
};