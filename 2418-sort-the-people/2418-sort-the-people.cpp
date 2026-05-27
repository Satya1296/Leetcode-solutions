class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>pp;
        for(int i=0;i<names.size();i++){
            pp.push_back({heights[i],names[i]});
        }
        sort(pp.rbegin(),pp.rend());
        vector<string>res;
        for(auto i: pp){
            res.push_back(i.second);
        }
        return res;
    }
};