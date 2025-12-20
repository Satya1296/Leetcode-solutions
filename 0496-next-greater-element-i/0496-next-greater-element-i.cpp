class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        for(int i=0;i<nums1.size();i++){
            int idx=-1;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    idx=j;
                    break;
                }
            }
            int ans=-1;
            for(int k=idx+1;k<nums2.size();k++){
                if(nums2[k]>nums2[idx]){
                    ans=nums2[k];
                    break;
                }
            }
            res.push_back(ans);
        }
        return res;
    }
};