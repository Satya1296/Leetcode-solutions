class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>res;
        for(int i=1;i<=n;i++){
            res.push_back(i);
        }
        // 1 2 3 4 5 
        int j=0;
        while(res.size()>1){
            int d=(j+k-1)%res.size(); //1
            res.erase(res.begin()+d);
            j=d;
        }
        return res[0];
    }
};