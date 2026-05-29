class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string r(s.size(),' ');
        for(int i=0;i<s.size();i++){
            r[indices[i]]=s[i];
        }
        return r;
    }
};