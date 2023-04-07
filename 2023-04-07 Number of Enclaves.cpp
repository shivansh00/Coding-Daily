class Solution {
    vector<vector<bool>> vis;
    void dfs(vector<vector<int>> &grid, const int i, const int j, const int m, const int n) {
        if (i < 0 or i >= m or j < 0 or j >= n or !grid[i][j])
            return;
        grid[i][j]= 0;

        dfs(grid, i, j-1, m, n);
        dfs(grid, i, j+1, m, n);
        dfs(grid, i-1, j, m, n);
        dfs(grid, i+1, j, m, n);

        return;
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        const int m= grid.size();
        const int n= grid[0].size();
        vis.resize(m, vector<bool>(n));
        for (int i= 0; i < m; ++i) {
            if (grid[i][0])
                dfs(grid, i, 0, m, n);
            if (grid[i][n-1])
                dfs(grid, i, n-1, m, n);
        }
        for (int j= 0; j < n; ++j) {
            if (grid[0][j])
                dfs(grid, 0, j, m, n);
            if (grid[m-1][j])
                dfs(grid, m-1, j, m, n);
        }
        int cnt= 0;
        for (const vector<int> &row: grid)
            for (const int &cell: row)
                cnt+= cell;
        return cnt;     
    }
};
