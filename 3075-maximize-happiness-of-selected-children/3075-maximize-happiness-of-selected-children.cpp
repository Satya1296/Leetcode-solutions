class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum=0,dec=0;
        sort(happiness.begin(),happiness.end());
        for(int i=happiness.size()-1;i>=0 && k>0;i--){
            long long a=happiness[i]-dec;
            if(a<=0) break;
            sum+=a;
            dec++;
            k--;
        }
        return sum;
    }
};