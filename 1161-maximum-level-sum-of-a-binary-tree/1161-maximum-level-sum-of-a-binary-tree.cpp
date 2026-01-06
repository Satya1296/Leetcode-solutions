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
    int maxLevelSum(TreeNode* root) {
        int idx=-1;
        vector<int>v;
        if(root==NULL) return idx;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int sum=0;
            for(int i=0;i<n;i++){
                TreeNode *ptr=q.front();
                q.pop();
                sum+=ptr->val;
                if(ptr->left!=NULL){
                    q.push(ptr->left);
                }
                if(ptr->right!=NULL){
                    q.push(ptr->right);
                }
            }
            v.push_back(sum); // 1 7 -1
        }
        int maxi=v[0];
        for(int i=1;i<v.size();i++){
            if(v[i]>maxi){
                maxi=v[i];
                idx=i;
            }
        }
        return idx+1;
    }
};