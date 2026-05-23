class Solution {
public:
    bool checkString(string s) {
        string r=s;
        sort(s.begin(),s.end());
        if(r==s) return true;
        return false;
    }
};