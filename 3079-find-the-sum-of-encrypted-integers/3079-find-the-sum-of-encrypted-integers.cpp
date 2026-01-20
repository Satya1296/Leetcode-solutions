class Solution {
public:
    int digits(int n){
        int maxi=INT_MIN;
        int s=0;
        int cnt=0;
        while(n>0){
            maxi=max(maxi,n%10);
            n/=10;
            cnt++;
        }
        while(cnt){
            s=s*10+maxi;
            cnt--;
        }
        return s;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int res=0;
        for(auto x:nums){
            res+=digits(x);
        }
        return res;
    }
};