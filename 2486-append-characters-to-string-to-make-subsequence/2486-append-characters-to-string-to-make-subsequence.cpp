class Solution {
public:
    int appendCharacters(string s, string t) {
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==t[c]) c++;
        }
        return t.size()-c;
    }
};