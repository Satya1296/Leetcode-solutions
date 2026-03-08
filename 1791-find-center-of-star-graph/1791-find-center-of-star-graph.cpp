class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>mpp;
        for(int i=0;i<edges.size();i++){
            for(int j=0;j<edges[i].size();j++){
                mpp[edges[i][j]]++;
            }
        }
        int n=edges.size();
        for(auto i:mpp){
            if(i.second==n) return i.first;
        }
        return -1;
    }
};