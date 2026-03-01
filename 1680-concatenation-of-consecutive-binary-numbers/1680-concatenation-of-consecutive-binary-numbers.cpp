class Solution {
public:
    string bin(int n){
        string b="";
        while(n>0){
            b+=(n%2)+'0';
            n/=2;
        }
        reverse(b.begin(),b.end());
        return b;
    }
    int concatenatedBinary(int n) {
        string res="";
        const int MOD=1e9+7;
        for(int i=1;i<=n;i++){
            string s=bin(i);
            res+=s;
        }
        long long ans=0;
        for(char c:res){
            ans=(ans*2+(c-'0'))%MOD;
        }
        return ans;
    }
};