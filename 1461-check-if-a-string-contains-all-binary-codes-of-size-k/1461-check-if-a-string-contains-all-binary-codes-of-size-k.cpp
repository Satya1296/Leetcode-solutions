class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size()<k) return false;
        unordered_set<string>st;
        for(int i=0;i+k<s.size();i++){
            st.insert(s.substr(i,k));
        }
        // 00 10 01 11
        int res=pow(2,k);
        return st.size()==res;
    }
};