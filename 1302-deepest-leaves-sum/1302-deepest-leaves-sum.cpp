/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int res=0;
        if(root==NULL) return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int cnt=0;
            int n=q.size();
            int sum=0;
            for(int i=0; i<n; i++){
                TreeNode* ptr=q.front();
                q.pop();
                sum += ptr->val;
                if(ptr->left) q.push(ptr->left);
                if(ptr->right) q.push(ptr->right);
            }
            res=sum;
        }
        return res;
    }
};