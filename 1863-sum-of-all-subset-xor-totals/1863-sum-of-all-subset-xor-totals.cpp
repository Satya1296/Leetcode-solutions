class Solution {
public:
    int dfs(vector<int>&nums,int index,int curxor){
        if(index==nums.size()) return curxor;
        int take=dfs(nums,index+1,curxor^nums[index]);
        int skip=dfs(nums,index+1,curxor);
        return take+skip;
    }
    int subsetXORSum(vector<int>& nums) {
        return dfs(nums,0,0);
    }
};