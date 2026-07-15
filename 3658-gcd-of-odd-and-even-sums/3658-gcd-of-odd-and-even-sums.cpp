class Solution {
public:
    int odd_sum(int n){
        return n*n;
    }
    int even_sum(int n){
        return n*(n+1);
    }
    int gcdOfOddEvenSums(int n) {
        int a=odd_sum(n);
        int b=even_sum(n);
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
};