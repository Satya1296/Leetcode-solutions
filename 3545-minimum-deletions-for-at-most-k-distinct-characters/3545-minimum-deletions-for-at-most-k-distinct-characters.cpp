class Solution {
public:
    int minDeletion(string s, int k) {
        set<int>st(s.begin(),s.end());
        unordered_map<int,int>mpp;
        vector<int>v;
        for(char c:s){
            mpp[c]++;
        }
        if(st.size()<=k){
            return 0;
        }
        else{
            for(auto i:mpp){
                v.push_back(i.second); // 3 2 
            }
        }
        sort(v.begin(),v.end()); // 2 3
        int d=st.size()-k; // 2-1=1
        int ans=0;
        for(int i=0;i<d;i++){
            ans+=v[i];
        }
        return ans;
    }
};