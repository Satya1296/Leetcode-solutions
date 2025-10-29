class Solution {
public:
    string to_binary(int num){
        string bi="";
        if(num==0) return "0";
        while(num>0){
            bi+=char((num%2)+'0');
            num/=2;
        }
        reverse(bi.begin(),bi.end());
        return bi;
    }
    int minBitFlips(int start, int goal) {
        string s=to_binary(start);
        string r=to_binary(goal);
        int len=max(s.size(),r.size());
        while (s.size()<len) s='0'+s;
        while (r.size()<len) r='0'+r;
        int count=0;
        for(int i=0;i<len;i++){
            if(s[i]!=r[i]) count++;
        }
        return count;
    }
};