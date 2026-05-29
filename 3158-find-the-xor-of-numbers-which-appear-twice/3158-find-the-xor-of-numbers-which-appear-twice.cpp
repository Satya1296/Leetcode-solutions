class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i:nums){
            mpp[i]++;
        }
        int x=0;
        for(auto i:mpp){
            if(i.second==2){
                x^=i.first;
            }
        }
        return x;
    }
};