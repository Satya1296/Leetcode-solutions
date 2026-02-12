class Solution {
public:
    int longestBalanced(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            unordered_map<char,int>mpp;
            for(int j=i;j<s.size();j++){
                mpp[s[j]]++;
                int maxi=0,mini=INT_MAX;
                for(auto i:mpp){
                   maxi=max(maxi,i.second);
                   mini=min(mini,i.second);
                }
                if(maxi==mini){
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};