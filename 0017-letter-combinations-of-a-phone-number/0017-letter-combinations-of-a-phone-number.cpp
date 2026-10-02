class Solution {
public:
    vector<string>ans;
    vector<string>res={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void solve(string &digits,int i,string &s){
        if(i==digits.size()){
            ans.push_back(s);
            return;
        }
        string word=res[digits[i]-'0'];
        for(char ch:word){
            s.push_back(ch);
            solve(digits,i+1,s);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        string s="";
        solve(digits,0,s);
        return ans;
    }
};