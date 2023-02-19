class Solution {
    queue<TreeNode*> q;
    vector<vector<int>> ret;
    void l2r() {
        vector<int> pb;
        while (!q.empty()) {
            TreeNode *node= q.front();
            q.pop();
            if (!node) {
                ret.push_back(pb);
                if (q.empty())
                    return;
                q.push(nullptr);
                r2l();
                return;
            }
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
            pb.push_back(node->val);
        }
    }
    void r2l () {
        vector<int> pb;
        while (!q.empty()) {
            TreeNode *node= q.front();
            q.pop();
            if (!node) {
                reverse(pb.begin(), pb.end());
                ret.push_back(pb);
                if (q.empty())
                    return;
                q.push(nullptr);
                l2r();
                return;
            }
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
            pb.push_back(node->val);
        }
    }
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root)
            return {};
        q.push(root);
        q.push(nullptr);
        l2r();
        return ret;
    }
};
