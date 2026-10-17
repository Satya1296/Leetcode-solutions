class Solution {
public:
    int sum(int n){
        int s=0;
        while(n>0){
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>>p;
        for(auto i:nums){
            p.push_back({sum(i),i});
        }
        // {37,10} {100,1}
        sort(p.begin(), p.end());
        vector<int>arr;
        for(auto it:p){
            arr.push_back(it.second);
        }
        // 10 1
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]=i;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==arr[i]) continue;
            int j=mpp[arr[i]];
            swap(nums[i],nums[j]);
            mpp[nums[j]]=j;
            mpp[nums[i]]=i;
            cnt++;
        }
        return cnt;
    }
};