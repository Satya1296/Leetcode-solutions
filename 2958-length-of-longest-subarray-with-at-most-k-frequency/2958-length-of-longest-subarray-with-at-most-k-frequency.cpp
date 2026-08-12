class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int start=0,maxi=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            while(mpp[nums[i]]>k){
                mpp[nums[start]]--;
                start++;
            }
            maxi=max(maxi,i-start+1);
        }
        return maxi;
    }
};