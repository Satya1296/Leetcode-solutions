class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        // 2 3 4 6 8 
        unordered_set<int>s(nums.begin(),nums.end());
        int m=*max_element(nums.begin(),nums.end()); // 8
        for(int i=k;i<=m+k;i+=k){
            if(s.find(i)==s.end()){
                return i;
            }
        }
        return -1;
    }
};