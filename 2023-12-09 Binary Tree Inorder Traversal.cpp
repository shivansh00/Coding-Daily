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
    vector<int> inV;
    void inOrder(TreeNode* node) {
        if (node == nullptr)
            return;
        inOrder(node->left);
        inV.push_back(node->val);
        inOrder(node->right);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if (root)
            inOrder(root);
        return inV;
    }
};
