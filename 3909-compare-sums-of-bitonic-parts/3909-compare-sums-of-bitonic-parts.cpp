class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        long long sum1=0,sum2=0;
        int maxi=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[maxi]){
                maxi=i;
            }
        }
        for(int i=0;i<=maxi;i++){
            sum1+=nums[i];
        }
        for(int i=maxi;i<nums.size();i++){
            sum2+=nums[i];
        }
        if(sum1>sum2) return 0;
        else if(sum1<sum2) return 1;
        else return -1;
    }
};