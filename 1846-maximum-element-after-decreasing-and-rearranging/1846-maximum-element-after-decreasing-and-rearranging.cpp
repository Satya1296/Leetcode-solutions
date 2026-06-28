class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end()); // 1 1 2 2 2
        if(arr[0]!=1){
            arr[0]=1; 
        }
        for(int i=0;i<arr.size()-1;i++){ 
            if(abs(arr[i+1]-arr[i])>1){ 
                arr[i+1]=arr[i]+1;
            }
            else continue;
        }
        int s=*max_element(arr.begin(),arr.end());
        return s;
    }
};