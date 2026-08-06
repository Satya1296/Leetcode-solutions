class Solution {
public:
    int digit(int num){
        int prod=1;
        while(num>0){
            prod*=num%10;
            num/=10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        for(int i=n;i<=n+10;i++){
            int x=digit(i); 
            if(x%t==0){
                return i;
            }
        }
        return -1;
    }
};