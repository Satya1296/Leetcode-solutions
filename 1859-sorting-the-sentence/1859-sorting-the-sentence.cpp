class Solution {
public:
    string sortSentence(string s) {
        vector<string>str(10);
        stringstream ss(s);
        string word="";
        while(ss >> word){
            int p=word.back()-'0';
            word.pop_back();
            str[p]=word;
        }
        string ans="";
        for(int i=1;i<str.size();i++){
            ans+=str[i]+" ";
        }
        while(!ans.empty() && ans.back()==' '){
            ans.pop_back();
        }
        return ans;
    }
};