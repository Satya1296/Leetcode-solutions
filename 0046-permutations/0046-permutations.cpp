class Solution {
public:
    vector<vector<int>>res;
    void solve(vector<int>&nums,vector<int>&a,vector<bool>&used){
        if(a.size()==nums.size()){
            res.push_back(a);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(used[i]) continue;
            used[i]=true;
            a.push_back(nums[i]);
            solve(nums,a,used);
            a.pop_back();
            used[i]=false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>a;
        vector<bool>used(nums.size(),false);
        solve(nums,a,used);
        return res;
    }
};