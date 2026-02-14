class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end()); // 1 3 3 3 4
        int i=0,j=nums.size()-1;
        int cnt=0;
        while(i<j){
            int sum=nums[i]+nums[j];
            if(sum==k){
                i++;
                j--;
                cnt++;
            }
            else if(sum>k){
                j--;
            }
            else i++;
        }
        return cnt;
    }
};