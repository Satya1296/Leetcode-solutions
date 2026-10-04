class Solution {
public:
    bool checkValidString(string s) {
        int l=0,r=0;
        for(auto c:s){
            if(c=='('){
                l++;
                r++;
            }
            else if(c==')'){
                if(l>0) l--;
                r--;
            }
            else{
                if(l>0) l--;
                r++;
            }
            if(r<0) return false;
        }
        return l==0;
    }
};