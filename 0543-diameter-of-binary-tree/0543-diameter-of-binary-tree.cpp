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
// class Solution {
// public:

// int height(TreeNode* root){
//     if(root==NULL){
//         return 0;
//     }

//     int left = height(root->left);
//     int right = height(root->right);
    
//     int ans =  max(left,right)+1;
//     return ans;
// }
//     int diameterOfBinaryTree(TreeNode* root) {

//         if(root==NULL){
//             return 0;
//         }

//         int op1 = diameterOfBinaryTree(root->left);
//         int op2 = diameterOfBinaryTree(root->right);

//         int op3 = height(root->left) + height(root->right);

//         int ans = max(op1, max(op2,op3));
//         return ans;
        
//     }
// };


class Solution {
public:
    // Helper function to calculate the diameter of a binary tree
    pair<int, int> diameterFast(TreeNode* root) {
        if (root == NULL) {
            // If the tree is empty, return a pair of {diameter = 0, height = 0}
            return make_pair(0, 0);
        }

        // Recursively calculate the diameter and height for the left and right subtrees
        pair<int, int> left = diameterFast(root->left);
        pair<int, int> right = diameterFast(root->right);

        // Calculate the diameter options:
        int op1 = left.first;                         // Diameter from the left subtree
        int op2 = right.first;                        // Diameter from the right subtree
        int op3 = left.second + right.second;         // Diameter passing through the current node

        // Calculate the final diameter and height
        pair<int, int> ans;
        ans.first = max(op1, max(op2, op3));          // Maximum diameter
        ans.second = max(left.second, right.second) + 1;  // Height of the current node

        return ans;
    }

    // Main function to return the diameter of the binary tree
    int diameterOfBinaryTree(TreeNode* root) {
        return diameterFast(root).first;
    }
};
