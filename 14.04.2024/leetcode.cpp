class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return dfs(root, false);
    }

    int dfs(TreeNode* node, bool is_left) {
        if (!node) return 0;
        if (!node->left && !node->right && is_left) return node->val;
        return dfs(node->left, true) + dfs(node->right, false);
    }
};