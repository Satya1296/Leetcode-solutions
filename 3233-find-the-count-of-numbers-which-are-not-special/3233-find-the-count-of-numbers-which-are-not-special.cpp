class Solution {
public:
    bool isprime(int n){
        if(n<2) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int nonSpecialCount(int l, int r) {
        int a=r-l+1;
        int c=0;
        for(int i=2;i*i<=r;i++){
            if(isprime(i)){
                int sq=i*i;
                if(sq>=l && sq<=r) c++;
            }
        }
        return a-c;
    }
};