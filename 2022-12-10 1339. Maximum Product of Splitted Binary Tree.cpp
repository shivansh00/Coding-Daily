class Solution {
public:
    #define MOD 1000000007
    long int tsum;
    long int treeSum(TreeNode *node) {
        long int sum= node->val;
        if (node->left)
            sum+= treeSum(node->left);
        if (node->right)
            sum+= treeSum(node->right);
        return sum;
    }
    int maxPro(TreeNode *node, long long int &maxi) {
        long long int sum= node->val;
        if (node->left)
            sum+= maxPro(node->left, maxi);
        if (node->right)
            sum+= maxPro(node->right, maxi);
        if ( ((tsum-sum)*sum) > maxi )
            maxi= ((tsum-sum)*sum);
        return sum;
    }
    int maxProduct(TreeNode* root) {
        tsum= treeSum(root);
        long long int maxi= 0;
        maxPro(root, maxi);
        return maxi%MOD;
    }
};
