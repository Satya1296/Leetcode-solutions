class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mpp;
        int start=0,maxi=0;
        for(int end=0;end<s.size();end++){
            mpp[s[end]]++;
            while(mpp[s[end]]>1){
                mpp[s[start]]--;
                start++;
            }
            maxi=max(maxi,end-start+1);
        }
        return maxi;
    }
};