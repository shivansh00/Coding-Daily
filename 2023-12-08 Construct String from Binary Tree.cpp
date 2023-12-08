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
    string s;
    void reg(TreeNode* node) {
        s+= to_string(node->val);
        if (node->left or node->right) {
            s.push_back('(');
            if (node->left)
                reg(node->left);
            s.push_back(')');
            if (node->right) {
                s.push_back('(');
                reg(node->right);
                s.push_back(')');
            }
        }
        return;
    }
public:
    string tree2str(TreeNode* root) {
        if (root)
            reg(root);
        return s;
    }
};
