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
    int binaryGap(int n) {
        string s=bin(n);
        int f=-1;
        int maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                if(f!=-1){
                    maxi=max(maxi,i-f);
                }
                f=i;
            }
        }
        return maxi;
    }
};