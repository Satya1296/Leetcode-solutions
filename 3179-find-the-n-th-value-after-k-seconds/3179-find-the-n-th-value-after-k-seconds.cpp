class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int>nums(n,1);
        const int MOD=1e9+7;
        while(k--){
            vector<int>pref(n,0);
            pref[0]=nums[0];
            for(int i=1;i<n;i++){
                pref[i]=(pref[i-1]+nums[i])%MOD;
            }
            nums=pref;
        }
        return nums[n-1];
    }
};