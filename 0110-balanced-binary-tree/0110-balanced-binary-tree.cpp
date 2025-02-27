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

  int height(TreeNode* root) {
        if (root == nullptr) return 0;
        
        // Get the height of left and right subtrees
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        
        // If the subtree is unbalanced (difference in heights > 1), return -1
        if (leftHeight == -1 || rightHeight == -1 || abs(leftHeight - rightHeight) > 1) {
            return -1;
        }
        
        // Return the height of this subtree
        return max(leftHeight, rightHeight) + 1;
    }

    bool isBalanced(TreeNode* root) {
       return  height(root) != -1;
    }
};