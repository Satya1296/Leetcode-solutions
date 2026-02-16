class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long>pq;
        for(int i:gifts){
            pq.push(i); // 100 64 25 9 4
        }
        while(k--){
            long long val=pq.top();
            pq.pop();
            long long s=sqrt(val);
            pq.push(s);
        }
        long long sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};