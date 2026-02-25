class Solution {
public:
    int ones(int n){
        int cnt=0;
        while(n>0){
            if(n%2==1) cnt++;
            n/=2;
        }
        return cnt;
    }
    bool canSortArray(vector<int>& nums) {
        vector<int>arr=nums;
        sort(arr.begin(),arr.end());
        for(int i=0;i<nums.size();i++){
            if(ones(nums[i])!=ones(arr[i])){
                return false;
            }
        }
        return true;
    }
};