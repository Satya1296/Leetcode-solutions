class Solution {
public:
    int maxi=1001;
    vector<int>prime=vector<int>(maxi);
    void spf(){
        for(int i=0;i<maxi;i++){
            prime[i]=i;
        }
        for(int i=2;i*i<maxi;i++){
            if(prime[i]==i){
                for(int j=i*i;j<maxi;j+=i){
                    if(prime[j]==j) prime[j]=i;
                }
            }
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        spf();
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            while(a>1){
                mpp[prime[a]]++;
                a/=prime[a];
            }
        }
        return mpp.size();
    }
};