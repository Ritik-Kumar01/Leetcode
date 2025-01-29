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
//   // DFS approach
//    void preorder(TreeNode* &root,int level,vector<int>&result){
//     if(root==NULL) return;

//     if(result.size()<level){
//         result.push_back(root->val);
//     }

//     preorder(root->right,level+1,result);
//     preorder(root->left,level+1,result);
//    }

//     vector<int> rightSideView(TreeNode* root) {


//         vector<int> result;

//         preorder(root,1,result);
//         return result;
        
//     }
// };





class Solution {
public:
  

    vector<int> rightSideView(TreeNode* root) {
     
     if(root==NULL) return{};
    
    vector<int> result;
     queue<TreeNode*> que;
     que.push(root);

     while(!que.empty()){
        int n = que.size();
        TreeNode* node =NULL;

        while(n--){
            node = que.front();
            que.pop();

        if(node->left!=NULL){
            que.push(node->left);
        }
        if(node->right!=NULL){
            que.push(node->right);
        }
        }


     result.push_back(node->val);
     }
     return result;
   
    }
};