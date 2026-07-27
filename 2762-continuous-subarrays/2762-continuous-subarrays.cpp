class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        multiset<int>s; // stores in sorted order and allow duplicates
        int start=0;
        long long res=0;
        for(int end=0;end<nums.size();end++){
            s.insert(nums[end]); // 2 4 4 5
            while(*s.rbegin() - *s.begin()>2){
                s.erase(s.find(nums[start]));
                start++;
            }
            res+=(end-start+1);
        }
        return res;
    }
};