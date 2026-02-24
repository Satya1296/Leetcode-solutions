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
    int sumRootToLeaf(TreeNode* root) {
        if(root==NULL) return 0;
        int sum=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode *ptr=q.front();
            q.pop();
            if(ptr->left!=NULL){
                ptr->left->val=ptr->val*2+ptr->left->val; // 2 // 4 
                q.push(ptr->left); 
            }
            if(ptr->right!=NULL){
                ptr->right->val=ptr->val*2+ptr->right->val;
                q.push(ptr->right);
            }
            if(ptr->left==NULL && ptr->right==NULL){
                sum+=ptr->val;
            }
        }
        return sum;
    }
};