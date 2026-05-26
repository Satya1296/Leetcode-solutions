class Solution {
public:
    string reverseOnlyLetters(string s) {
        string res="";
        for(int i=s.size()-1;i>=0;i--){
            if(isalpha(s[i])){
                res+=s[i];
            }
        }
        string ans="";
        int j=0;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                ans+=res[j];
                j++;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};