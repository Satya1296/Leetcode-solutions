class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int sl=s.size();
        int pl=p.size();
        if(pl>sl) return ans;
        map<char,int>mp1,mp2;
        for(char c:p) mp1[c]++; // a=1, b=1,c=1
        for(int i=0;i<sl;i++){
            mp2[s[i]]++; // c=1,b=1,a=1
            if(i>=pl){ // 3>=3
                mp2[s[i-pl]]--;
                if(mp2[s[i-pl]]==0) mp2.erase(s[i-pl]);
            }
            if(mp1==mp2) ans.push_back(i-pl+1);
        }
        return ans;
    }
};