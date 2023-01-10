class Solution {
public:
    bool sameTree(TreeNode* p, TreeNode* q) {
        if (p->val != q->val)
            return false;
        if ((bool(p->left) ^ bool(q->left)) or (bool(p->right) ^ bool(q->right)))
            return false;
        if (p->left and !sameTree(p->left, q->left))
            return false;
        if (q->right and !sameTree(p->right, q->right))
            return false;
        return true;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (bool(p) ^ bool(q))
            return false;
        if (p)
            return sameTree(p, q);
        return true;
    }
};
