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
  
   bool check(TreeNode* l , TreeNode* r){
    if(l==NULL && r==NULL ){
        return true;
    }
    
    // one of them  is null and other is not null
    // both of them is not null
    if(l==NULL || r==NULL){
        return false;
    }

    if((l->val==r->val) && check(l->left,r->right) && check(l->right, r->left)){
        return true;
    }
    return false;
   }
   
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }

        return check(root->left,root->right);
    }
};