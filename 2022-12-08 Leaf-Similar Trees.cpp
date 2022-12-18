class Solution {
public:
    void leafNode(TreeNode* node, vector<int>& v) {
        if (!node->left and !node->right)
            v.push_back(node->val);
        else {
            if (node->left)
                leafNode(node->left, v);
            if (node->right)
                leafNode(node->right, v);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2;
        if (root1)
            leafNode(root1, v1);
        if (root2)
            leafNode(root2, v2);
        return v1 == v2;
    }
};
