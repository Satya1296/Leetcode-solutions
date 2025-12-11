class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=0;
        int curr=capacity;
        for(int i=0;i<plants.size();i++){
            if(plants[i]<=capacity){
                steps++;
                capacity-=plants[i]; // 1
            }
            else{
                steps+=i+(i+1);
                capacity=curr;
                capacity-=plants[i];
            }
        }
        return steps;
    }
};