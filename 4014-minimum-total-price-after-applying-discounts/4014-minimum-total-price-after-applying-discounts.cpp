class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end()); //10 21 30
        sort(discounts.begin(),discounts.end()); // 50 60 
        int l=prices.size()-1,r=discounts.size()-1; // 2 , 1 
        double res=0;
        while(l>=0 && r>=0){
            int x=discounts[r];
            int y=prices[l];
            res+=(y*(100.0-x))/100.0;
            r--;
            l--;
        }
        while(l>=0){
            res+=prices[l];
            l--;
        }
        return res;
    }
};