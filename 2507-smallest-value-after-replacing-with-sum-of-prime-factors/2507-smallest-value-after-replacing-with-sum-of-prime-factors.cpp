class Solution {
public:
    int maxi=1e5+1;
    vector<int>prime=vector<int>(maxi);
    void spf(){
        for(int i=0;i<maxi;i++){
            prime[i]=i;
        }
        for(int i=2;i*i<=maxi;i++){
            if(prime[i]==i){
                for(int j=i*i;j<maxi;j+=i){
                    if(prime[j]==j) prime[j]=i;
                }
            }
        }
    }
    int smallestValue(int n) {
        // static bool flag=false;
        // if(!flag){
        spf();
        //     flag=true;
        // }
        while(prime[n]!=n){
            unordered_map<int,int>mpp;
            int x=n;
            while(x>1){ //100
                int p=prime[x]; // x=2,2,5, 5
                mpp[p]++; // 2 -> 2, 5->2
                x=x/p; // 50, 25 , 5, 1
            }
            int sum=0;
            for(auto i:mpp){
                sum+=(i.first)*(i.second); // 14
            }
            if(sum==n) break;
            n=sum;
        }
        return n;
    }
};