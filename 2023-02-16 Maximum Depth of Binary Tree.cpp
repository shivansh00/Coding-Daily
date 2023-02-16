class Solution {
    int findDepth(TreeNode* node) {
        int l= 0, r= 0;
        if (node->left) l= findDepth(node->left);
        if (node->right)r= findDepth(node->right);
        return 1+ max(l, r);
    }
public:
    int maxDepth(TreeNode* root) {
        if (root)
            return findDepth(root);
        return 0;
    }
};
