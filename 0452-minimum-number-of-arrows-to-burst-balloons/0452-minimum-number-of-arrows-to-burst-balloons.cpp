class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(), [] (auto &a, auto &b){
            return a[1]<b[1];
        });
        int cnt=1;
        int p=points[0][1];
        for(auto &i:points){
            if(i[0]>p){
                cnt++;
                p=i[1];
            }
        }
        return cnt;
    }
};