class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int maxi=nums[0];
            for(int j=0;j<=i;j++){
                if(nums[j]>maxi) maxi=nums[j];
            }
            int mini=nums[i];
            for(int j=i;j<n;j++){
                if(nums[j]<mini) mini=nums[j];
            }
            if(maxi-mini<=k){
                return i;
            }
        }
        return -1;
    }
};