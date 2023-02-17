class Solution {
    int mini= INT_MAX;
    vector<int> bt;
    void traverse(TreeNode *node) {
        if (node->left)
            traverse(node->left);
        bt.push_back(node->val);
        if (node->right)
            traverse(node->right);
        return;
    }
public:
    int minDiffInBST(TreeNode* root) {
        traverse(root);
        for (int i= 0; i < bt.size()-1; i++)
            bt[i]= bt[i+1]-bt[i];
        return *min_element(bt.begin(), bt.end());
    }
};
