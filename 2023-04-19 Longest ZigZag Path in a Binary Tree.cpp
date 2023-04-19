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
    int left(TreeNode* node, int cnt) {
        if (!node->left and !node->right)   return cnt;
        int l= 0, r= 0;
        if (node->left)     l= left(node->left, 1);
        if (node->right)    r= right(node->right, cnt+1);
        if (!node->right)   return max({l, r, cnt});
        return max(l, r);
    }
    int right(TreeNode* node, int cnt) {
        if (!node->left and !node->right)   return cnt;
        int l= 0, r= 0;
        if (node->left)     l= left(node->left, cnt+1);
        if (node->right)    r= right(node->right, 1);
        if (!node->left)    return max({l, r, cnt});
        return max(l, r);
    }
public:
    int longestZigZag(TreeNode* root) {
        int l= 0, r= 0;
        if (root->left)     l= left(root->left, 1);
        if (root->right)    r= right(root->right, 1);
        return max(l, r);
    }
};
