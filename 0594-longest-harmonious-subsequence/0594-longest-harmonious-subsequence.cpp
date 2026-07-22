class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // 1 2 2 2 3 3 5 7
        int j=0,maxi=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]-nums[j]>1){
                j++;
            }
            if(nums[i]-nums[j]==1){
                maxi=max(maxi,i-j+1);
            }
        }
        return maxi;
    }
};