class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int f=0;
            for(int j=0;j<n;j++){
                if(i==j) continue;
                if(intervals[j][0]<=intervals[i][0] && intervals[i][1]<=intervals[j][1]){
                    f=1;
                    break;
                }
            }
            if(f==0) cnt++;
        }
        return cnt;
    }
};