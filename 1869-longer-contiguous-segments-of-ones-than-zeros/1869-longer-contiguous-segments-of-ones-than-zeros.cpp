class Solution {
public:
    bool checkZeroOnes(string s) {
        int cnt1=0,cnt0=0,maxi1=0,maxi2=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                cnt1=0;
                cnt0++;
                maxi1=max(maxi1,cnt0);
            }
            else{
                cnt0=0;
                cnt1++;
                maxi2=max(maxi2,cnt1);
            }
        }
        return maxi1<maxi2;
    }
};