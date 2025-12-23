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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root); // 3
        while(!q.empty()){
            int s=q.size(); //1 
            vector<int>v;
            for(int i=0;i<s;i++){
                TreeNode *ptr=q.front();
                q.pop();
                v.push_back(ptr->val);
                if(ptr->left!=NULL) q.push(ptr->left);
                if(ptr->right!=NULL) q.push(ptr->right);
            }
            ans.push_back(v);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};