class Solution {
public:
    long long countValidSubstrings(string s) {
        int n=s.size();
        long long ans=0;
        int start=0;
        for(int i=0;i<n;i++){
            if(i>=2 && s[i-2]=='a' && s[i-1]=='b' && s[i]=='c'){
                start=i-1;
            }
            ans+=(i-start+1); // 3
        }
        return ans;
    }
};