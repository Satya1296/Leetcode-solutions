class Solution {
public:
    int sumof(int x){
        int sum=0;
        while(x>0){
            sum+=x%10;
            x=x/10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            int l=sumof(nums[i]);
            res.push_back(l);
        }
        int mini=*min_element(res.begin(),res.end());
        return mini;
    }
};