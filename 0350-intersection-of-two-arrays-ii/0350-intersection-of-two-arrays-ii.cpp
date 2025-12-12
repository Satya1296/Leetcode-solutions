class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         vector<int>m;
        map<int,int>freq;
        for(auto i:nums2){
            freq[i]++;
        }
        for(auto i:nums1){
            if(freq[i]){
                m.push_back(i);
                freq[i]--;
            }
        }
        return m;
    }
};