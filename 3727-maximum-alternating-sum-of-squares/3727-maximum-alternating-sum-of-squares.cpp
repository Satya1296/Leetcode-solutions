class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(auto &c :nums){
            if(c<0) c=-c;
        }
        long long n=nums.size();
        sort(nums.rbegin(),nums.rend());
        // 3 3 2 2 1 1 
        long long sum1=0,sum2=0;
        int a=(n+1)/2;
        for(int i=0;i<a;i++){
            sum1+=nums[i]*nums[i];
        }
        for(int i=a;i<n;i++){
            sum2+=nums[i]*nums[i];
        }
        return sum1-sum2;
    }
};