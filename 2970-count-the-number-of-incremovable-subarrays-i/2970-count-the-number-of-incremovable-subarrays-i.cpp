class Solution {
public:
    bool increase(vector<int>nums){
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                return false;
            }
        }
        return true;
    }
    int incremovableSubarrayCount(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                vector<int>temp;
                for(int k=0;k<i;k++){
                    temp.push_back(nums[k]);
                }
                for(int k=j+1;k<nums.size();k++){
                    temp.push_back(nums[k]);
                }
                if(increase(temp)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};