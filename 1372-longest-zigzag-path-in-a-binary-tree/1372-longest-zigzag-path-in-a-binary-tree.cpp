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
private:
    int maxZigZag = 0;

    void dfs(TreeNode* node, bool isLeft, int length) {
        if (!node) return; // Base case: if node is null, return
        maxZigZag = max(maxZigZag, length); // Update the maximum ZigZag length
        if (isLeft) {
            // Move to the left child and change direction
            dfs(node->left, false, length + 1);
            // Restart ZigZag from the right child
            dfs(node->right, true, 1);
        } else {
            // Move to the right child and change direction
            dfs(node->right, true, length + 1);
            // Restart ZigZag from the left child
            dfs(node->left, false, 1);
        }
    }

public:
    int longestZigZag(TreeNode* root) {
        // Start DFS in both directions
        dfs(root, true, 0);  // Start by moving right
        dfs(root, false, 0); // Start by moving left
        return maxZigZag;
    }
};
