class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int maxi=logs[0][1]; // 3
        int id=logs[0][0]; // 0
        for(int i=1;i<logs.size();i++){
            int diff=logs[i][1]-logs[i-1][1]; // 2
            if(maxi<diff){
                maxi=diff;
                id=logs[i][0];
            }
            else if(maxi==diff){
                id=min(id,logs[i][0]);
            }
        }
        return id;
    }
};