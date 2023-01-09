class Solution {
    vector<int> r;
public:
    void pot(TreeNode* node) {
        r.push_back(node->val);
        if (node->left)
            pot(node->left);
        if (node->right)
            pot(node->right);
        return;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        if (root)    
            pot(root);
        return r;
    }
};
