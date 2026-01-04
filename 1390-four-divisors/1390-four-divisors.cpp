class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int x:nums){
            int cnt=0;
            int s=0;
            for(int i=1;i<=x;i++){
                if(x%i==0){
                    cnt++;
                    s+=i;
                }
            }
            if(cnt==4){
                sum+=s;
            }
        }
        return sum;
    }
};