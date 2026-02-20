class Solution {
public:
// 1 1 2 2 2 3 4 5 7 8 9 9 
    long long maxWeight(vector<int>& pizzas) {
        int n=pizzas.size();
        sort(pizzas.begin(),pizzas.end()); // 1 2 3 4 5 6 7 8
        int days=n/4; // 2 // 3
        int odd=(days+1)/2; //1 // 2
        int even=days/2; // 1 
        long long ans=0;
        int r=n-1; // 7 // 11
        while(odd--){ //1 //2 
            ans+=pizzas[r]; //9 // 8
            r--; //9 // 5 // 8 //4 
        }
        r--;
        while(even--){
            ans+=pizzas[r]; // 3
            r-=2;
        }
        return ans;
    }
};