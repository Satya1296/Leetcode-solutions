class Solution {
public:
    bool validDigit(int n, int x) {
        vector<int>arr;
        while(n>0){
            arr.push_back(n%10);
            n/=10;
        }
        reverse(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x && i!=0) return true;
            if(arr[i]==x && i==0) return false;
        }
        return false;
    }
};