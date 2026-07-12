class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        const long long MOD=1e9+7;
        long long c=0,ans=0;
        long long m=k;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=m){
                m-=nums[i]; // 3
            }
            else{
                long long n=nums[i]-m;
                long long op=(n+k-1)/k;
                __int128 res=(__int128)op*((c+1)+(c+op));
                res/=2;
                ans=(ans+(long long)(res%MOD))%MOD;
                c+=op;
                m+=1LL*op*k;
                m-=nums[i];
            }
        }
        return ans%MOD;
    }
};