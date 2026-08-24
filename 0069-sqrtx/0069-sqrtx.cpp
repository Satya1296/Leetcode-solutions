class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;
        long long res;
        for(long long i=1;i*i<=x;i++){
            res=i;
        }
        return res;
    }
};