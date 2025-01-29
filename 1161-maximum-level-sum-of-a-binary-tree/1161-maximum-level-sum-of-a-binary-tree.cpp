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
       int maxsum = INT_MIN;
        int resultlevel = 0;

        queue<TreeNode*> que;
        que.push(root);

        int currentlevel = 1;

        while(!que.empty()){

            int sum = 0; 
            int n = que.size();
            // Traversing through current level
            while(n--){
                TreeNode* temp = que.front();
                que.pop();

                sum += temp->val;

                if(temp->left){
                    que.push(temp->left);
                }

                if(temp->right){
                    que.push(temp->right);
                }

            }

            if(sum>maxsum){
                maxsum = sum;
                resultlevel = currentlevel;
            }
            currentlevel++;
            
        }
        return resultlevel;
        
    }
};