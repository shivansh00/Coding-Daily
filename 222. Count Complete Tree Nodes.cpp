int countNodes(TreeNode* root) {
        int cnt= 0;
        if (root) {
            cnt++;
            cnt+= countNodes(root->left);
            cnt+= countNodes(root->right);
        }
        return cnt;
    }
