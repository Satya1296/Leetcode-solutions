class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int s1=0,s2=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) s1+=nums[i];
            else if(nums[i]<nums[i-1] && nums[i]<nums[i+1]) s2+=nums[i];
        }
        return s1-s2;
    }
};