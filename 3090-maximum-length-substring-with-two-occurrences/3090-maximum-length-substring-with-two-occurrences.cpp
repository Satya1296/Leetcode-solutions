class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxi=0;
        for(int i=0;i<s.size();i++){
            unordered_map<char,int>mpp;
            for(int j=i;j<s.size();j++){
                mpp[s[j]]++;
                if(mpp[s[j]]>2)
                break;
                maxi=max(maxi,j-i+1);
            }
        }
        return maxi;
    }
};