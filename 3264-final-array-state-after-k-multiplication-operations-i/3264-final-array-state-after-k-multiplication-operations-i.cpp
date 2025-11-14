class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k>0){
            int mini=*min_element(nums.begin(),nums.end());
            int idx=-1;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==mini){
                    idx=i;
                    break;
                }
            }
            nums[idx]*=multiplier;
            k--;
        }
        return nums;
    }
};