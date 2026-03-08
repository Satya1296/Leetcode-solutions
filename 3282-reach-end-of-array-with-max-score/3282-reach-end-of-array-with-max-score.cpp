class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        int i=0;
        int j=i+1;
        int n=nums.size();
        long long res=0;
        while(j!=n){
            if(nums[j]>nums[i] || j==n-1){
                res+=(long long)(j-i)*nums[i]; // res=
                i=j; 
                j++;
            }
            else{
                j++;
            }
        }
        return res;
    }
};