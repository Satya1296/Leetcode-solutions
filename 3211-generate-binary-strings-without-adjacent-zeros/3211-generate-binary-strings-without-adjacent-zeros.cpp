class Solution {
public:
    vector<string>res;
    bool cnt1(string &s){
        for(int i=0;i+1<s.size();i++){
            if(s[i]=='0' && s[i+1]=='0') return false;
        }
        return true;
    }
    void solve(int n,string &s,int i){
        if(i==n){
            if(cnt1(s)){
                res.push_back(s);
            }
            return;
        }
        s.push_back('0');
        solve(n,s,i+1);
        s.pop_back();
        s.push_back('1');
        solve(n,s,i+1);
        s.pop_back();
    }
    vector<string> validStrings(int n) {
        string s;
        solve(n,s,0);
        return res;
    }
};