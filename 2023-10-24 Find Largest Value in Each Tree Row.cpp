class Solution {
    vector<int> ans;
    queue<TreeNode*> q;
    int rowMax= INT_MIN;
public:
    vector<int> largestValues(TreeNode* root) {
        if (root == nullptr)
            return ans;
        q.push(root);
        q.push(nullptr);
        while (!q.empty()) {
            TreeNode* node= q.front();
            q.pop();
            if (node == nullptr) {
                ans.push_back(rowMax);
                if (q.empty())
                    break;
                rowMax= INT_MIN;
                q.push(nullptr);
                continue;
            }
            rowMax= max(rowMax, node->val);
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        return ans;
    }
};
