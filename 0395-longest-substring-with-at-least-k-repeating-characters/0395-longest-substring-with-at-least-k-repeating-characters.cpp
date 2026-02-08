class Solution {
public:
    int longestSubstring(string s, int k) {
        if(s.size()<k) return 0;
        vector<int>frq(26);
        int n=s.size();
        for(int i=0;i<n;i++){
            frq[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            if(frq[s[i]-'a']<k){
                int l=longestSubstring(s.substr(0,i),k);
                int r=longestSubstring(s.substr(i+1),k);
                return max(l,r);
            }
        }
        return s.size();
    }
};