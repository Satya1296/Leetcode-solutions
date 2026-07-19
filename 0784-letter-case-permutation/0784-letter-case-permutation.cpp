class Solution {
public:
    vector<string>solve(string s,vector<string>&st,int i){
        int n=s.size(); //4
        if(i>=n){
            st.push_back(s);
            return st;
        }
        if(s[i]>='a' && s[i]<='z'){ //a
            vector<string>ans=solve(s,st,i+1);
            string str=s;//a1b2
            str[i]=toupper(str[i]); //A1b2
            return solve(str,ans,i+1); //
        }
        else if(s[i]>='A' && s[i]<='Z'){
            vector<string>ans=solve(s,st,i+1);
            string str=s;
            str[i]=tolower(str[i]);
            return solve(str,ans,i+1);
        }
        else{
            return solve(s,st,i+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        int n=s.size();
        vector<string>jyo;
        return solve(s,jyo,0);
    }
};