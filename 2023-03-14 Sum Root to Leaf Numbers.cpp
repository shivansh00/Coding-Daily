class Solution {
    int sum= 0;
    void dfs(TreeNode *node, int num) {
        num*= 10;
        num+= node->val;
        if (!node->left and !node->right) {
            sum+= num;
            return;
        }
        if (node->left)     dfs(node->left, num);
        if (node->right)    dfs(node->right, num);
        return;
    }
public:
    int sumNumbers(TreeNode* root) {
        dfs(root, 0);
        return sum;
    }
};
