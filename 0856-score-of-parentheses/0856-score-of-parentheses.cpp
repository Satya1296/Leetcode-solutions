class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        int res=0;
        for(char c:s){
            if(c=='('){
                st.push(res); // 0
                res=0;
            }
            else{
                res=st.top()+max(res*2,1);
                st.pop();
            }
        }
        return res;
    }
};