class Solution {
public:
    vector<int>arr=vector<int>(1e6+1);
    void spf(int maxi){
        for(int i=0;i<=maxi;i++) arr[i]=i;
        for(int i=2;i*i<=maxi;i++){
            if(arr[i]==i){
                for(int j=i*i;j<=maxi;j+=i){
                    if(arr[j]==j) arr[j]=i;
                }
            }
        }
    }
    int minOperations(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        spf(maxi);
        int ans=0;
        for(int i=nums.size()-2;i>=0;i--){
            while(nums[i]>nums[i+1]){
                if(arr[nums[i]]==nums[i]) return -1;
                nums[i]=arr[nums[i]];
                ans++;
            }
        }
        return ans;
    }
};