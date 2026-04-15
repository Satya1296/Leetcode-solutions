class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>res;
        unordered_map<char,int>mpp;
        string s1="qwertyuiop";
        string s2="asdfghjkl";
        string s3="zxcvbnm";
        for(char c:s1) mpp[c]=1;
        for(char c:s2) mpp[c]=2;
        for(char c:s3) mpp[c]=3;
        for(string word:words){
            string l=word;
            for(char &ch:l){
                ch=tolower(ch);
            }
            int r=mpp[l[0]];
            bool flag=true;
            for(char c:l){
                if(mpp[c]!=r){
                    flag=false;
                    break;
                }
            }
            if(flag) res.push_back(word);
        }
        return res;
    }
};