class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        /*(0,0)(0,1)(0,2)(1,2)(2,2)(2,1)(2,0)(1,0)(1,1)
        left=0,top=0,right=m-1,bottom=n-1
        loop--> left<=right and top<=bottom
        print from left to right(1,2,3)->top++
        print all elements in right i.e is from top to bottom (3,6,9)->right--
        print from right to left->bottom--
        print from bottom to up->left++
        */
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>ans;
        int left=0,top=0,right=n-1,bottom=m-1;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};