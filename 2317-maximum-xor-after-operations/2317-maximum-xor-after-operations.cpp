class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int res=0;
        for(auto a:nums){
            res|=a;
        }
        return res;
    }
};