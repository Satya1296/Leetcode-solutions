class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<int,int>mpp;
        for(char c:s){
            mpp[c]++;
        }
        int f=-1;
        for(auto i:mpp){
            if(f==-1) f=i.second;
            else if(i.second!=f) return false;
        }
        return true;
    }
};