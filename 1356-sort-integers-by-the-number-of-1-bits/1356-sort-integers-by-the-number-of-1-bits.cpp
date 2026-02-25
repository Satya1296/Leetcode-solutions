class Solution {
public:
    string binary(int n){
        string b="";
        while(n>0){
            b+=(n%2)+'0';
            n/=2;
        }
        reverse(b.begin(),b.end());
        return b;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>p;
        for(int i=0;i<arr.size();i++){
            string s=binary(arr[i]);
            int cnt=0;
            for(char c:s){
                if(c=='1') cnt++;
            }
            p.push_back({cnt,arr[i]});
        }
        sort(p.begin(),p.end(), [](auto &a, auto &b){
            if(a.first==b.first) return a.second<b.second;
            return a.first<b.first;
        });
        vector<int>res;
        for(auto i:p){
            res.push_back(i.second);
        }
        return res;
    }
};