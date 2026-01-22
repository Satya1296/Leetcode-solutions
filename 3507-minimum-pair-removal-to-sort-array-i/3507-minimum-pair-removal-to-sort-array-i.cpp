class Solution {
public:
    bool decrease(vector<int>&a){
        for(int i=0;i<a.size()-1;i++){
            if(a[i]>a[i+1]){
                return false;
            }
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int cnt=0;
        while(!decrease(nums)){
            int mini=INT_MAX;
            int idx=0;
            for(int i=0;i<nums.size()-1;i++){
                int sum=nums[i]+nums[i+1];
                if(sum<mini){
                    mini=sum;
                    idx=i;
                }
            }
            nums[idx]=nums[idx]+nums[idx+1];
            nums.erase(nums.begin()+idx+1);
            cnt++;
        }
        return cnt;
    }
};