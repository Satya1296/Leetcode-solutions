class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<=n-k;i++){
            unordered_map<int,int>mpp;
            for(int j=i;j<i+k;j++){
                mpp[nums[j]]++; // 1->2 2->2 3-->1 4-->1
            }
            priority_queue<pair<int,int>>pq;
            for(auto i:mpp){
                pq.push({i.second,i.first});
            }
            int sum=0,cnt=0;
            while(!pq.empty() && cnt<x){
                auto val=pq.top();
                pq.pop();
                int a=val.second;
                int freq=val.first;
                sum+=freq*a;
                cnt++;
            }
            res.push_back(sum);
        }
        return res;
    }
};