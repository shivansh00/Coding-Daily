class Solution {
    vector<bool> vis;
    void dfs(int city, const int &n, const vector<vector<int>> &grid) {
        vis[city]= true;
        for (int ct= 0; ct < n; ct++)
            if (grid[city][ct] and !vis[ct])
                dfs(ct, n, grid);
        return;
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        const int n= isConnected.size();
        vis.resize(n);
        int cnt= 0;
        for (int i= 0; i < n; i++)
            if (!vis[i]) {
                cnt++;
                dfs(i, n, isConnected);
            }
        return cnt;
    }
};
