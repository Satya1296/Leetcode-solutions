class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>v,ans;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                v.push_back(i); // 3 5 6 11 
            }
        }
        for(int i=0;i<s.size();i++){
            int mini=INT_MAX;
            for(int j=0;j<v.size();j++){
                mini=min(mini,abs(i-v[j]));
            }
            ans.push_back(mini);
        }
        return ans;
    }
};