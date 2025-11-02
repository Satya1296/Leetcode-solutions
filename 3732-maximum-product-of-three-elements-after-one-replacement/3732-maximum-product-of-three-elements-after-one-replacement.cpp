class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        for(auto &i:nums){
            if(i<0) i=-i;
        }
        sort(nums.begin(),nums.end());
        // 0 5 7
        int n=nums.size();
        long long ans=(long long)nums[n-1]*nums[n-2];
        if(ans>0){
            ans=ans*1e5;
        }
        else{
            ans=-ans*1e5;
        }
        return ans;
    }
};