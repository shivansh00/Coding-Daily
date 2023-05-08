class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        const int n= mat.size();
        int sum= 0;
        for (int i= 0; i < n; i++)
            sum+= mat[i][i]+ mat[i][n-1-i];
        if (n&1)    sum-= mat[n>>1][n>>1];
        return sum;
    }
};
