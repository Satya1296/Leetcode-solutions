class Solution {
public:
    /*long long number(string s){
        long long res=0;
        for(char c:s){
            res=res*2+(c-'0');
        }
        return res;
    }
    int numSteps(string s) {
        long long n=number(s);
        int cnt=0;
        while(n>1){
            if(n%2==0){
                n/=2;
                cnt++;
            }
            else{
                n=n+1;
                cnt++;
            }
        }
        return cnt;
        }*/
    int numSteps(string s){
        int l=0;
        int carry=0;
        for(int i=s.length()-1;i>0;i--){
            int c=(s[i]-'0')+carry;
            if(c==1){
                l+=2;
                carry=1;
            }
            else l+=1;
        }
        return l+carry;
    }
};