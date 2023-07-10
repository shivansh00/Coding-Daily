class Solution {
    queue<TreeNode*> q;
    int depth= 0;
    TreeNode* node;
public:
    int minDepth(TreeNode* root) {
        if (!root)
            return 0;
        q.push(root);
        q.push(nullptr);
        while (!q.empty()) {
            node= q.front();
            q.pop();
            if (!node) {
                if (q.empty())
                    break;
                depth++;
                q.push(nullptr);
                continue;
            }
            if (!node->left and !node->right)
                return depth+1;
            else {
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
        }
        return depth;
    }
};
