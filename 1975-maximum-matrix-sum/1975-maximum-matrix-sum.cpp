class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0;
        long long count=0;
        int mini=INT_MAX;
        for(auto &row:matrix){
            for(int i:row){
                sum+=abs(i);
                if(i<0) count++; //2
                mini=min(mini,abs(i)); // 1
            }
        }
        if(count%2==0) return sum;
        else return sum-2*mini;
    }
};