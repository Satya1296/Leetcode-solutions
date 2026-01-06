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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode*>q;
        q.push(root);
        int sum=0;
        while(!q.empty()){
            TreeNode *ptr=q.front();
            q.pop();
            if(ptr->left!=NULL){
                if(ptr->left->left==NULL && ptr->left->right==NULL){
                    sum+=ptr->left->val;
                }
                else{
                    q.push(ptr->left);
                }
            }
            if(ptr->right!=NULL){
                q.push(ptr->right);
            }
        }
        return sum;
    }
};