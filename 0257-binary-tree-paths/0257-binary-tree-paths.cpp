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
    vector<string>ans;
    void yana(TreeNode* root, string s){
        if(root==NULL) return;
        s+=to_string(root->val); // 1
        if(!root->left && !root->right){
            ans.push_back(s);
            return;
        }
        s+="->";
        yana(root->left,s);
        yana(root->right,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        yana(root,"");
        return ans;
    }
};