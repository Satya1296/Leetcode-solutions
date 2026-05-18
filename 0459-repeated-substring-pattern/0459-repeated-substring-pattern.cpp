class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int l=1;l<=n/2;l++){
            if(n%l==0){
                string a=s.substr(0,l);
                string temp="";
                for(int i=0;i<n/l;i++){
                    temp+=a;
                }
                if(temp==s){
                    return true;
                }
            }
        }
        return false;
    }
};