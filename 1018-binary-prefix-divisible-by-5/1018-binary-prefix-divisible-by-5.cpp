class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>ans;
        int rem=0;
        for(int x:nums){
            rem=(rem*2+x)%5;
            ans.push_back(rem==0);
        }
        return ans;
    }
};