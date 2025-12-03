class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int res=0,d=0;
        for(auto c:moves){
            if(c=='L') res--; //-1 -1
            else if(c=='R') res++;//0 0
            else d++;//1 2 3
        }
        return abs(res)+d;
    }
};