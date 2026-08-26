class Solution {
public:
    int maxi=1e6+1;
    vector<bool>a=vector<bool>(maxi,true);
    void isprime(){
        a[0]=false;
        a[1]=false;
        for(int i=2;i*i<maxi;i++){
            if(a[i]){
                for(int j=i*i;j<maxi;j+=i) a[j]=false;
            }
        }
    }
    vector<int> closestPrimes(int left, int right) {
        isprime();
        vector<int>res;
        for(int i=left;i<=right;i++){
            if(a[i]) res.push_back(i);
        }
        for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
        if(res.empty() || res.size()==1) return {-1,-1};
        int id1=-1,id2=-1,mini=INT_MAX;
        for(int i=0;i<res.size()-1;i++){
            if(res[i+1]-res[i]<mini){
                mini=res[i+1]-res[i];
                id1=res[i];
                id2=res[i+1];
            }
        }
        return {id1,id2};
    }
};