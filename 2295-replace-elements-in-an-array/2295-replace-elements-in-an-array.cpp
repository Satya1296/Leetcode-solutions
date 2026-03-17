class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]=i;
        }
        // mpp[1]=0 mpp[2]=1 mpp[4]=2 mpp[6]=3
        for(auto it:operations){
            int f=it[0]; // 1
            int s=it[1]; // 3
            int idx=mpp[f]; // mpp[1]=0
            nums[idx]=s; // nums[0]=3
            mpp.erase(f); // 
            mpp[s]=idx; // mpp[3]=0
        }
        return nums;
    }
};