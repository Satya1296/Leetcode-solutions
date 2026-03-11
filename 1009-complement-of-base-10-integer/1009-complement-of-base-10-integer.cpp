class Solution {
public:
    string binary(int n){
        string b="";
        while(n>0){
            b+=(n%2)+'0';
            n/=2;
        }
        reverse(b.begin(),b.end());
        return b;
    }
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        string l=binary(n);
        for(int i=0;i<l.size();i++){
            if(l[i]=='1'){
                l[i]='0';
            }
            else{
                l[i]='1';
            }
        }
        int s=0;
        for(char c:l){
            s=s*2+(c-'0');
        }
        return s;
    }
};