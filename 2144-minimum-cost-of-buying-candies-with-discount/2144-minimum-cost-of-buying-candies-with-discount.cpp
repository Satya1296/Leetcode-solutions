class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(),cost.rend());
        // 9 7 6 5 2 2 
        int res=0,min;
        for(int i=0;i<cost.size();i++){
            if((i+1)%3 !=0){
                res+=cost[i];
            }
        }
        return res;
    }
};