class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
        vector<long long>pref(n);
        pref[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            pref[i]=__gcd(nums[i],maxi);
        }
        // 2 6 2
        sort(pref.begin(),pref.end());
        int i=0,j=n-1;
        long long sum=0;
        while(i<j){
            sum+= __gcd(pref[i],pref[j]);
            i++;
            j--;
        }
        return sum;
    }
};