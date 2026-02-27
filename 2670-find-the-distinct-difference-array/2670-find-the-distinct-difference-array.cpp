class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>suffix(n+1,0);
        unordered_set<int>s;
        for(int i=n-1;i>=0;i--){
            s.insert(nums[i]);
            suffix[i]=s.size();
        }
        vector<int>res(n);
        unordered_set<int>f;
        for(int i=0;i<n;i++){
            f.insert(nums[i]);
            int left=f.size();
            int right=suffix[i+1];
            res[i]=left-right;
        }
        return res;
    }
};