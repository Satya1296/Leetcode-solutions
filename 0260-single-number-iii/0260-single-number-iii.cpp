class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>res;
        int ans=0;
        for(int i=0;i<32;i++){
            int cnt=0;
            for(int x:nums){
                if((x>>i)&1) cnt++;
            }
            if(cnt%2){
                ans|=(1<<i); // we will get the xor of the two uniqyue numbers 
            }
        }
        // but here we want the 2 unique numbers 
        // so lets check the first set bit in the ans
        int bit=0;
        while(((ans>>bit)&1)==0) bit++; // for 6 the rightmost setbit is in 1st position
        //so lets divide the ans into 2 groups using the set bit position 
        int a=0,b=0;
        for(int x:nums){
            if((x>>bit)&1){
                a^=x;
            }
            else b^=x;
        }
        return {a,b};
    }
};