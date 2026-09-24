class Solution {
public:
    set<int>st;
    //int ans=0;
    void solve(vector<int>&digits,int i,string &s,vector<bool>&used){
        if(s.size()==3){
            if((s[2]-'0')%2==0){
                st.insert(stoi(s));
            }
            return;
        }
        if(i==digits.size()) return ;
        if(!used[i] && !(s.empty() && digits[i]==0)){
            used[i]=true;
            s.push_back(digits[i]+'0');
            solve(digits,0,s,used);
            s.pop_back();
            used[i]=false;
        }
        solve(digits,i+1,s,used);
    }
    int totalNumbers(vector<int>& digits) {
        string s="";
        vector<bool>used(digits.size(),false);
        solve(digits,0,s,used);
        return st.size();
    }
};