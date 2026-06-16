class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0,sqs=0;
        while(n>0){
            int digit=n%10;
            sum+=digit;
            sqs+=digit*digit;
            n/=10;
        }
        return sqs-sum>=50;
    }
};