class Solution {
public:
    bool judgeCircle(string moves) {
        int sum1=0,sum2=0;
        for(char c:moves){
            if(c=='U') sum1+=1;
            else if(c=='D') sum1+=-1;
            else if(c=='R') sum2+=1;
            else sum2+=-1;
        }
        return (sum1==0 && sum2==0);
    }
};