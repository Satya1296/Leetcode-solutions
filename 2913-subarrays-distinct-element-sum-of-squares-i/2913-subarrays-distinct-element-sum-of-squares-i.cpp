class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            unordered_map<int,int>mpp;
            int cnt=0;
            for(int j=i;j<nums.size();j++){
                mpp[nums[j]]++;
                if(mpp[nums[j]]==1){
                    cnt++;
                }
                ans+=cnt*cnt;
            }
        }
        return ans;
    }
};