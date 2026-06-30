class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>mpp;
        int right=0,cnt=0;
        for(int left=0;left<s.size();left++){
            mpp[s[left]]++;
            while(mpp.size()==3){
                cnt+=s.size()-left;
                mpp[s[right]]--;
                if(mpp[s[right]]==0){
                    mpp.erase(s[right]);
                }
                right++;
            }
        }
        return cnt;
    }
};