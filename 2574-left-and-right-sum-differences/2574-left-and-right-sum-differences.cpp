class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref(n+1,0);
        vector<int>suff(n+1,0);
        for(int i=1;i<=n;i++){
            pref[i]=pref[i-1]+nums[i-1];
        }
        for(int i=n-1;i>=0;i--){
            suff[i]=suff[i+1]+(i+1<n?nums[i + 1]:0);
        }
        vector<int>res;
        for(int i=0;i<n;i++){
            res.push_back(abs(pref[i]-suff[i]));
        }
        return res;
    }
};