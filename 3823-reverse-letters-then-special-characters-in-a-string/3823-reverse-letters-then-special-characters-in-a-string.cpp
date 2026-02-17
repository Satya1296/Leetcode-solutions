class Solution {
public:
    string reverseByType(string s) {
        string l="",sp="";
        for(char c:s){
            if(c>='a' && c<='z'){
                l+=c;
            }
            else sp+=c;
        }
        reverse(l.begin(),l.end());
        reverse(sp.begin(),sp.end());
        string res="";
        int i=0,j=0;
        for(char ch:s){
            if(ch>='a' && ch<='z'){
                res+=l[i++];
            }
            else res+=sp[j++];
        }
        return res;
    }
};