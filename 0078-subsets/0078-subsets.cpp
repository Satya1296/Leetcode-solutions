class Solution {
public:
    vector<vector<int>>res;
    void solve(int i,vector<int>&nums,vector<int>&a){
        if(i==nums.size()){
            res.push_back(a);
            return;
        }
        a.push_back(nums[i]);
        solve(i+1,nums,a);
        a.pop_back();
        solve(i+1,nums,a);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>a;
        solve(0,nums,a);
        return res;
    }
};