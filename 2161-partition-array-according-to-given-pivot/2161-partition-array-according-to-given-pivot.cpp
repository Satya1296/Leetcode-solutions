class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>res1,res2,res3,res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot) res1.push_back(nums[i]);
            else if(nums[i]==pivot) res2.push_back(nums[i]);
            else res3.push_back(nums[i]);
        }
        for(int a:res1) res.push_back(a);
        for(int b:res2) res.push_back(b);
        for(int c:res3) res.push_back(c);
        return res;
    }
};