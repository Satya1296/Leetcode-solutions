class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            vector<int>arr;
            while(n>0){
                int digit=n%10;
                arr.push_back(digit);
                n=n/10;
            }
            reverse(arr.begin(),arr.end());
            for(int j=0;j<arr.size();j++){
                ans.push_back(arr[j]);
            }
        }
        return ans;
    }
};