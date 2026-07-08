class Solution {
public:
    bool vow_count(string s){
        int n=s.size();
        return ((s[0]=='a' || s[0]=='e' ||s[0]=='i' || s[0]=='o' || s[0]=='u') && (s[n-1]=='a' || s[n-1]=='e' || s[n-1]=='i' || s[n-1]=='o' || s[n-1]=='u'));
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        vector<int>pref(n,0);
        for(int i=0;i<words.size();i++){
            if(vow_count(words[i])){
                pref[i]=1;
            }
        }
        for(int i=1;i<n;i++){
            pref[i]+=pref[i-1];
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            int l=queries[i][0];
            int r=queries[i][1];
            if(l==0) ans.push_back(pref[r]);
            else ans.push_back(pref[r]-pref[l-1]);
        }
        return ans;
    }
};