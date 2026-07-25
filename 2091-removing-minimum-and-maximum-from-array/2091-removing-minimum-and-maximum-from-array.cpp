class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int id1=-1,id2=-1;
        int maxi=*max_element(nums.begin(),nums.end()); // 2
        int mini=*min_element(nums.begin(),nums.end()); // 1
        for(int i=0;i<n;i++){
            if(nums[i]==maxi){
                id1=i; // 1
            }
            if(nums[i]==mini){
                id2=i; // 5
            }
        }
        int l=min(id1,id2); // 1
        int r=max(id1,id2); // 5
        int f=r+1; // 6
        int b=n-l; // 7
        int k=(l+1)+(n-r); // 2+3=5
        return min(f,min(b,k));
    }
};