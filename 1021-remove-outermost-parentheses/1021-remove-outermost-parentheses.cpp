class Solution {
public:
    string removeOuterParentheses(string s) {
        int b=0;
        string st;
        for(char c:s){
            if(c=='('){
                if(b>0) st+=c;
                b++;
            }
            else{
                b--;
                if(b>0) st+=c;
            }
        }
        return st;
    }
};