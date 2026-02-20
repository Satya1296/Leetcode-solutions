class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        // 1 1 2 3 4
        int cnt=0;
        int i=0;
        while(i<costs.size() && coins>=costs[i]){
            coins-=costs[i];
            cnt++;
            i++;
        }
        return cnt;
    }
};