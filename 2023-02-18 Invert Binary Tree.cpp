class Solution {
    void swapNode(TreeNode* root) {
        swap(root->left, root->right);
        if (root->left)
            swapNode(root->left);
        if (root->right)
            swapNode(root->right);
        return;
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root)
            swapNode(root);
        return root;
    }
};
