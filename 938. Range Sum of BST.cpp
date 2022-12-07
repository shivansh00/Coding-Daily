class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ret= 0;
        if (root) {
            ret+= rangeSumBST(root-> left, low, high);
            ret+= rangeSumBST(root-> right, low, high);
            if (low <= root-> val and root->val <= high)
                ret+= root-> val;
        }
        return ret;
    }
