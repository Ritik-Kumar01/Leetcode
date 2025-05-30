/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if(root == NULL) return NULL;

        if(root==p || root==q) return root;

        TreeNode* LeftLCA = lowestCommonAncestor(root->left,p,q);
        TreeNode* RightLCA  = lowestCommonAncestor(root->right,p,q);

        if(LeftLCA!=NULL && RightLCA!=NULL) return root;

        return (LeftLCA != NULL) ? LeftLCA : RightLCA;
        
    }
};