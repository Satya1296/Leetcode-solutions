class Solution {
public:
    int similarPairs(vector<string>& words) {
        vector<unordered_set<char>>v;
        for(auto word:words){
            unordered_set<char>s;
            for(char c:word){
                s.insert(c);
            }
            v.push_back(s);
        }
        int cnt=0;
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                if(v[i]==v[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};