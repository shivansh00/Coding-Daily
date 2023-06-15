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
    queue<TreeNode*> q;
    int maxi= INT_MIN;
    int sum= 0;
    int level= 1;
    int ans;
public:
    int maxLevelSum(TreeNode* root) {
        q.push(root);
        q.push(nullptr);
        while (!q.empty()) {
            TreeNode* node= q.front();
            q.pop();
            if (!node) {
                if (sum > maxi) {
                    maxi= sum;
                    ans= level;
                }
                sum= 0;
                if (!q.empty())
                    q.push(nullptr);
                level++;
                continue;
            }
            sum+= node->val;
            if (node->left)     q.push(node->left);
            if (node->right)    q.push(node->right);
        }
        return ans;
    }
};
