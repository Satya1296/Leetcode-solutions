class Solution {
public:
    bool canAliceWin(int n) {
        int t=10,s=0;
        while(n>=t){
            n-=t;
            t--;
            s++;
        }
        return s%2==1;
    }
};