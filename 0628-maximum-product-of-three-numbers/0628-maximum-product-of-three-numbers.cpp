class Solution {
public:
    int maximumProduct(vector<int>& nums) {
      int maximum,m;
      int n=nums.size();
        sort(nums.begin(),nums.end());
        maximum= nums[n-1]*nums[n-2]*nums[n-3];
        m=nums[0]*nums[1]*nums[n-1];
        return max(maximum,m);
    }
};