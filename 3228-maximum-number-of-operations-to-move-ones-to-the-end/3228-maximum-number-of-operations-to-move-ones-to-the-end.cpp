class Solution {
public:
    int maxOperations(string s) {
        int n=s.size();
        int cnt=0,res=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='1' && s[i+1]=='1'){
                cnt++; //2
            }
            else if(s[i]=='1' && s[i+1]=='0'){
                cnt++; // 1 //3
                res+=cnt; //1  //4
            }
        }
        return res;
    }
};