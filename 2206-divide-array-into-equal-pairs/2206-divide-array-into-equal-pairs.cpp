class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int num:nums) mpp[num]++;
        for(auto i:mpp){
            if(i.second %2!=0) return false;
        }
        return true;
    }
};