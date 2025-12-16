class Solution {
public:
    int minimumChairs(string s) {
        int cnt=0,maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='E') cnt++;
            else cnt--;
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};