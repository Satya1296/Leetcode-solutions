class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<k) return 0;
        sort(nums.begin(),nums.end()); // 1 4 7 9
        int i=0,j=i+k-1;
        int mini=INT_MAX;
        while(j<n){
            mini=min(mini,nums[j]-nums[i]);
            i++;
            j++;
        }
        return mini;
    }
};