class Solution {
public:
    string frequencySort(string s) {
        unordered_map<int,int>mpp;
        for(auto ch:s){
            mpp[ch]++;
        }
        vector<pair<char,int>>vec(mpp.begin(),mpp.end());
        sort(vec.begin(),vec.end(),[](auto &a ,auto &b){
            return a.second>b.second;
        });
        string ans="";
        for(auto i:vec){
            ans.append(i.second,i.first);
        }
        return ans;
    }
};