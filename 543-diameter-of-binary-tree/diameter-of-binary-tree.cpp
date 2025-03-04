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
    int calculateHeight(TreeNode* root, int& current_max) {
        // Base case
        if (root == nullptr) {
            return 0;
        }
        int leftHeight = calculateHeight(root->left, current_max);
        int rightHeight = calculateHeight(root->right, current_max);
        
        int total = leftHeight + rightHeight;
        current_max = (total > current_max) ? total : current_max;
        
        return 1 + (std::max(leftHeight, rightHeight));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int current_max = 0;
        calculateHeight(root, current_max);

        return current_max;
    }
};