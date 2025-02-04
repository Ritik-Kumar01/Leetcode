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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL){
            return true;    // Both trees are empty
        }
        if(p==NULL || q==NULL){
            return false;     // One tree is empty, the other is not
        }

        if(p->val != q->val){
            return false;    // Values at the current nodes are different
        }

        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);  
         //  // Check left subtree and right subtree recursively
    }
};