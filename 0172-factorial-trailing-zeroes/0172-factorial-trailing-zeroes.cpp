class Solution {
public:
    /*int factorial(int num){
        if(num==1 || num==0) return 1;
        else return num*factorial(num-1);
    }
    int trailingZeroes(int n) {
        if(n==0) return 0;
        int temp=n*n;
        int result=factorial(n);
        return result/temp;*/
    int trailingZeroes(int n){
        int cnt=0;
        while(n>0){
            n=n/5;
            cnt+=n;
        }
        return cnt;
    }
};