class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>cnt(26,0);
        for(char ch:s) cnt[ch-'a']++;
        for(char ch:t) cnt[ch-'a']--;
        int ans=0;
        for(int x:cnt){
            if(x>0) ans+=x;
        }
        return ans;
    }
};