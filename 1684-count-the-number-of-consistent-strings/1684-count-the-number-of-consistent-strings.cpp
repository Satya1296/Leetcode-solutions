class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>st(allowed.begin(),allowed.end());
        int cnt=0;
        for(string s:words){ // ad
           int f=1;
           for(char c:s){
                if(st.find(c)==st.end()){
                    f=0;
                    break;
                }
           }
           if(f==1) cnt++;
        }
        return cnt;
    }
};