class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>mpp;
        for(char c:s){
            mpp[c]++;
        }
        set<int>st;
        int ans=0;
        for(auto i:mpp){
            int f=i.second;
            while(f>0 && st.count(f)){
                f--;
                ans++;
            }
            if(f>0){
                st.insert(f);
            }
        }
        return ans;
    }
};