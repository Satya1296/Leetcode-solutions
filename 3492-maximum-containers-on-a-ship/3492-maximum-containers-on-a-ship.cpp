class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int x=n*n;
        int weight=maxWeight/w; // 5 
        return min(x,weight);
    }
};