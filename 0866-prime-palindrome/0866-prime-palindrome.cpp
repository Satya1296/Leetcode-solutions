class Solution {
public:
    int maxi=1e5;
    bool isprime(int n){
        if(n==0 || n==1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    bool ispalindrome(int n){
        int org=n;
        int rev=0;
        while(n>0){
            int digit=n%10;
            rev=rev*10+digit;
            n=n/10;
        }
        return org==rev;
    }
    int primePalindrome(int n) {
        if(n<=11){
            while(!isprime(n) || !ispalindrome(n)) n++;
            return n;
        }
        //bool flag=false;
        int ans;
        for(int i=10;i<maxi;i++){
            string s=to_string(i);
            string h=s.substr(0,s.size()-1);
            reverse(h.begin(),h.end());
            string p=s+h;
            ans=stoi(p);
            if(ans>=n && isprime(ans)){
                return ans;
            }
        }
        return -1;
    }
};