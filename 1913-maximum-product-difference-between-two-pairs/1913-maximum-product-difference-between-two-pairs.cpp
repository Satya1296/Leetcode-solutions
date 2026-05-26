class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size();
        sort(nums.rbegin(),nums.rend());
        int p1=nums[0]*nums[1];
        int p2=nums[n-1]*nums[n-2];
        return p1-p2;
    }
};