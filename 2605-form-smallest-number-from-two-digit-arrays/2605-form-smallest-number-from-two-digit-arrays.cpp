class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        for(auto x:nums1) mpp[x]++;
        for(auto x:nums2) mpp[x]++;
        for(int i=1;i<=9;i++){
            if(mpp[i]==2) return i;
        }
        int min1=*min_element(nums1.begin(),nums1.end());
        int min2=*min_element(nums2.begin(),nums2.end());
        int mini=min(min1,min2);
        int maxi=max(min1,min2);
        return mini*10+maxi;
    }
};