class Solution {
public:
    bool unique(string s){
        unordered_map<char,int>mpp;
        for(char c:s){
            mpp[c]++;
            if(mpp[c]>1) return false;
        }
        return true;
    }
    int solve(int i,string cur,vector<string>&a){
        if(i==a.size()) return cur.size();
        int skip=solve(i+1,cur,a);
        int take=0;
        if(unique(cur+a[i])){
            take=solve(i+1,cur+a[i],a);
        }
        return max(skip,take);
    }
    int maxLength(vector<string>& arr) {
        return solve(0,"",arr);
    }
};