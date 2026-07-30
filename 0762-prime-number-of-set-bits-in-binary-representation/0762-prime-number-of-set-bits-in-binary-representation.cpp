class Solution {
public:
    bool isprime(int n){
        if(n==0 || n==1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int c=0;
        for(int i=left;i<=right;i++){
            int cnt=0;
            for(int j=0;j<32;j++){
                if((i>>j)&1) cnt++;
            }
            if(isprime(cnt)) c++;
        }
        return c;
    }
};