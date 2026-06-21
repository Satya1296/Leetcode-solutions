class Solution {
public:
    int first(long long num){
        while(num>=10){
            num/=10;
        }
        return num;
    }
    int countValidSubarrays(vector<int>& nums, int x) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            long long sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum%10==x && first(sum)==x){
                    ans++;
                }
            }
        }
        return ans;
    }
};