class Solution {
public:
    vector<string>res;
    bool isEqual(string &s){
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') cnt++;
            else cnt--;
            if(cnt<0) return false;
        }
        return cnt==0;
    }
    void solve(int n,string &cur){
        if(cur.size()==2*n ){
            if(isEqual(cur)){
                res.push_back(cur);
            }
            return;
        }
        cur.push_back('(');
        solve(n,cur);
        cur.pop_back();
        cur.push_back(')');
        solve(n,cur);
        cur.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string s;
        solve(n,s);
        return res;
    }
};