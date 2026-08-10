class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>arr(n,vector<int>(n));
        int top=0,bottom=n-1,right=n-1,left=0;
        int num=1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                arr[top][i]=num;
                num++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                arr[i][right]=num;
                num++;
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    arr[bottom][i]=num;
                    num++;
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    arr[i][left]=num;
                    num++;
                }
                left++;
            }
        }
        return arr;
    }
};