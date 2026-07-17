class Solution {
public:
    string jyo(string s){
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(s[i]); //a b c
            }
        }
        string a="";
        while(!st.empty()){
            a+=st.top();
            st.pop();
        }
        reverse(a.begin(),a.end());
        return a;
    }
    bool backspaceCompare(string s, string t) {
        string z=jyo(s);
        string y=jyo(t);
        return z==y;
    }
};