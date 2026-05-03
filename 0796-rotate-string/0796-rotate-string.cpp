class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        if(n!=goal.size()) return false;
        for(int i=0;i<n;i++){
            char ch=s[0];
            s.erase(s.begin());
            s.push_back(ch);
            if(s==goal) return true;
        }
        return false;
    }
};