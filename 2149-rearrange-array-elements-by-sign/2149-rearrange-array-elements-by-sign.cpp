class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg;
        for(int c:nums){
            if(c>0) pos.push_back(c);
            else neg.push_back(c);
        }
        vector<int>res(nums.size());
        int p=0,n=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0) res[i]=pos[p++];
            else res[i]=neg[n++];
        }
        return res;
    }
};