class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        if(maxi==mini) return 0;
        int cnt=0;
        for(int i:nums){
            if(maxi!=i && mini!=i){
                cnt++;
            }
        }
        return cnt;
    }
};