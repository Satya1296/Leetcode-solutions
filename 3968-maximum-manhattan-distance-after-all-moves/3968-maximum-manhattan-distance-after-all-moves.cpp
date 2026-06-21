class Solution {
public:
    int maxDistance(string moves) {
        int x=0,y=0,cnt=0;
        for(char ch:moves){
            if(ch=='U'){
                x++;
            }
            else if(ch=='D'){
                x--;
            }
            else if(ch=='L'){
                y--;
            }
            else if(ch=='R'){
                y++;
            }
            else{
                cnt++;
            }
        }
        return abs(x)+abs(y)+cnt;
    }
};