class Solution {
    bool symCheck(TreeNode *lhs, TreeNode *rhs) {
        if (!lhs and !rhs)          return true;
        if (!lhs or !rhs)           return false;
        if (lhs->val != rhs->val)   return false;
        return symCheck(lhs->left, rhs->right) and symCheck(lhs->right, rhs->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if (!root)                  return true;
        return symCheck(root->left, root->right);
    }
};
