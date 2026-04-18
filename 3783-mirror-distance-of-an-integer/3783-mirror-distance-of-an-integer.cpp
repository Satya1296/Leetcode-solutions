class Solution {
public:
    int reverse(int n){
        int s=0;
        while(n>0){
            s=s*10+(n%10);
            n=n/10;
        }
        return s;
    }
    int mirrorDistance(int n) {
        int l=reverse(n);
        return abs(l-n);
    }
};