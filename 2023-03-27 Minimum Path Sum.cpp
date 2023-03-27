class Solution {
    vector<vector<int>> dp;
    int dfs(vector<vector<int>>& grid, int i, int j, int m, int n) {
        if (i >= m or j >= n)
            return INT_MAX;
        if (dp[i][j] != -1)
            return dp[i][j];
        dp[i][j]= grid[i][j]+ min(dfs(grid, i+1, j, m, n), dfs(grid, i, j+1, m, n));
        return dp[i][j];
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        const int m= grid.size();
        const int n= grid[0].size();
        dp.resize(m, vector<int>(n, -1));
        dp[m-1][n-1]= grid[m-1][n-1];
        return dfs(grid, 0, 0, m, n);
    }
};
