class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]; // 36
        }
        int left=0,right;
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            left+=nums[i]; // 10
            right=sum-left; //26
            if(abs(left-right)%2==0) cnt++;
        }
        return cnt;
    }
};