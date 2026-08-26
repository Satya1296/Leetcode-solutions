class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int cnt=0;
        int start=0;
        vector<string>res;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') cnt++;
            if(cnt==k){ // i=5 and cnt=3
                while(s[start]=='0') start++;
                res.push_back(s.substr(start,i-start+1));
                cnt--;
                start++;
            }
        }
        if(res.empty()) return "";
        // for(int i=0;i<res.size();i++){
        //     cout<<res[i]<<" ";
        // }
        sort(res.begin(),res.end(), [](auto &a,auto &b){
            if(a.size()!=b.size()) return a.size()<b.size();
            return a<b;
        });
        return res[0];
    }
};