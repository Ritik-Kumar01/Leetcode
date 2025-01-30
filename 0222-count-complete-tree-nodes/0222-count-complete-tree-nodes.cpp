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
//     int cnt=0;
//     void solve(TreeNode* root){
//          if(!root){
//             return;
//         }
// cnt++;
//         solve(root->left);
//         solve(root->right);
//     }
// public:
//     int countNodes(TreeNode* root) {
        
//         solve(root);
//         return cnt;
//     }
// };




class Solution {
 
public:
    int countNodes(TreeNode* root) {
      
      if(root==NULL){
        return 0;
      }

      return 1+countNodes(root->left) + countNodes(root->right);
    }
};