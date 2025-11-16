class Solution {
public:
    long long mod=1e9+7;
    int numSub(string s) {
        int n=s.size();
        long long r=0,c=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1')
            c=(c+1)%mod;
            else 
            c=0;
            r=(r+c)%mod;
        }
        return r%mod;
    }
};