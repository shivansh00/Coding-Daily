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
    vector<int> vals;
    void pushVal(TreeNode *node) {
        if (node->left)     pushVal(node->left);
        vals.push_back(node->val);
        if (node->right)    pushVal(node->right);
        return;
    }
public:
    int getMinimumDifference(TreeNode* root) {
        pushVal(root);
        int mini= vals[1]- vals[0];
        for (int i= 2; i < vals.size(); i++)
            mini= min(mini, vals[i]-vals[i-1]);
        return mini;
    }
};
