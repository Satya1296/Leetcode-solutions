class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long cnt=0;
        int k=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK || nums[i]>maxK) k=i; // k=0 1 2 1
            else cnt+=i-k;
        }
        return cnt;
    }
};