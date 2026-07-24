class Solution {
public:
    vector<vector<string>>str;
    bool palindrom(string &s){
        int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    void solve(vector<string>&st,string &s,int i){
        if(i==s.size()){
            str.push_back(st);
            return;
        }
        for(int j=i;j<s.size();j++){
            string a=s.substr(i,j-i+1);
            if(palindrom(a)){
                st.push_back(a);
                solve(st,s,j+1);
                st.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>st;
        solve(st,s,0);
        return str;
    }
};