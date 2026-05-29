class Solution {
public:
    string arrangeWords(string text) {
        text[0]=tolower(text[0]);
        stringstream ss(text);
        string word;
        vector<pair<string,int>>pp;
        while(ss >> word){
            pp.push_back({word,word.size()});
        }
        stable_sort(pp.begin(),pp.end(), [] (auto &a, auto &b){
            return a.second<b.second;
        });
        string ans="";
        for(auto i:pp){
            ans+=i.first+" ";
        }
        ans.pop_back();
        ans[0]=toupper(ans[0]);
        return ans;
    }
};