class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            pq.push({score[i],i});
        }
        // 5--0 4--1 3--2 2--3 1--4
        vector<string>ans(n);
        int r=1;
        while(!pq.empty()){
            auto top=pq.top(); // 5
            pq.pop();
            int idx=top.second;
            if(r==1) ans[idx]="Gold Medal";
            else if(r==2) ans[idx]="Silver Medal";
            else if(r==3) ans[idx]="Bronze Medal";
            else ans[idx]=to_string(r);
            r++;
        }
        return ans;
    }
};