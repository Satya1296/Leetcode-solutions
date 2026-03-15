class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i:nums){
            mpp[i]++;
        }
        for(auto i:nums){
            if(i%2==0 && mpp[i]==1){
                return i;
            }
        }
        return -1;
    }
};