class Solution {
public:
    int maxDepth(string s) {
        int m=0;
        int maxi=0;
        for(char c:s){
            if(c=='('){
                m++;
                maxi=max(maxi,m);
            }
            else if(c==')') m--;
        }
        return maxi;
    }
};