class Solution {
public:
    int minimumPushes(string word) {
        vector<int>res;
        map<char,int>mpp;
        for(char c:word){
            mpp[c]++;
        }
        for(auto it:mpp){
            res.push_back(it.second); // 2 2 2 2 2 2 2 2 6
        }
        sort(res.rbegin(),res.rend());
        int ans=0;
        for(int i=0;i<res.size();i++){
            ans+=res[i]*((i/8)+1);
        }
        return ans;
    }
};