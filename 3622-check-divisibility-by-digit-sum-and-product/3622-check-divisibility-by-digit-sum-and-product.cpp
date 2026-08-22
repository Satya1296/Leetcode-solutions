class Solution {
public:
    bool checkDivisibility(int n) {
        long long org=n;
        long long sum=0,prod=1;
        while(org!=0){
            int digit=org%10;
            sum+=digit;
            prod*=digit;
            org=org/10;
        }
        if(sum+prod==0) return false;
        else return (n%(sum+prod)==0);
    }
};