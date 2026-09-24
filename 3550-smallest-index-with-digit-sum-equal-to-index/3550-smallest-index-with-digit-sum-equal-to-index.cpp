class Solution {
public:
    int sumof(int n){
        int s=0;
        while(n>0){
            s+=n%10;
            n=n/10;
        }
        return s;
    }
    int smallestIndex(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(sumof(nums[i])==i){
                return i;
            }
        }
        return -1;
    }
};