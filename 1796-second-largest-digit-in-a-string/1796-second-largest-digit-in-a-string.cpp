class Solution {
public:
    int secondHighest(string s) {
        vector<int>res;
        for(char c:s){
            if(c>='0'&& c<='9'){
                res.push_back(c-'0');
            }
        }
        sort(res.begin(),res.end());
        set<int>st(res.begin(),res.end());
        res.assign(st.begin(),st.end());
        if(res.size()<2) return -1;
        return res[res.size()-2];
    }
};