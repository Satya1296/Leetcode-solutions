class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int k=sum-x;
        if(k==0) return nums.size();
        if(k<0) return -1;
        int left=0;
        long long total=0;
        int maxi=-1;
        for(int right=0;right<nums.size();right++){
            total+=nums[right];
            while(total>k){
                total-=nums[left];
                left++;
            }
            if(total==k) maxi=max(maxi,right-left+1);
        }
        return maxi==-1?-1:nums.size()-maxi;
    }
};