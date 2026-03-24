class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        int n=barcodes.size();
       unordered_map<int,int>mpp;
       for(int i:barcodes){
            mpp[i]++;
       }
       int maxival=-1,maxicnt=0;
        for(auto i:mpp){
            if(i.second>maxicnt){
                maxicnt=i.second; // 4
                maxival=i.first; // 1
            }
        }
        vector<int>ans(n);
        int i=0;
        while(mpp[maxival]>0){
            ans[i]=maxival;
            i+=2;
            mpp[maxival]--;
        }
        for(auto j:mpp){
            while(j.second>0){
                if(i>=n){
                    i=1;
                }
                ans[i]=j.first;
                i+=2;
                j.second--;
            }
        }
        return ans;
    }
};