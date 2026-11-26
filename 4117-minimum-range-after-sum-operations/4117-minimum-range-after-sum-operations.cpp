class Solution {
public:
    int minRange(int a, int b, int c) {
        if(a+b<c) c=a+b;
        if(b+c<a) a=b+c;
        if(c+a<b) b=a+c;
        return max({a,b,c})-min({a,b,c});
    }
};