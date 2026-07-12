class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>res=arr;
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(),res.end()),res.end());
        unordered_map<int,int>mpp;
        for(int i=0;i<res.size();i++){
            mpp[res[i]]=i+1;
        }
        vector<int>ans;
        for(auto j:arr){
            ans.push_back(mpp[j]);
        }
        return ans;
    }
};