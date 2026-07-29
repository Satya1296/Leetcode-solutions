class Solution {
public:
    int reverseBits(int n) {
        int ans=0;
        for(int i=0;i<32;i++){
            ans=ans<<1; // it creates space at last bit
            ans|=(n&1); // copy the last bit
            n=n>>1; // moves to next bit
        }
        return ans;
    }
};