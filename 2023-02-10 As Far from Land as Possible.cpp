class Solution {
    vector<vector<bool>> vis;
    queue<pair<int, int>> q;
    void pushQ(const int i, const int j, const int n) {
        if (0 <= i and i < n and 0 <= j and j < n and !vis[i][j]) {
            q.push({i, j});
            vis[i][j]= true;
        }
    }
public:
    int maxDistance(vector<vector<int>>& grid) {
        const int n= grid.size();
        vis.resize(n, vector<bool>(n));
        bool l= false, w= false;
        for (int i= 0; i < n; i++)
            for (int j= 0; j < n; j++)
                if (grid[i][j]) {
                    q.push({i, j});
                    vis[i][j]= true;
                }
        if (q.size() == n*n) {
            return -1;
        }
        int dis= -1;
        while (!q.empty()) {
            int sz= q.size();
            while (sz--) {
                int i= q.front().first;
                int j= q.front().second;
                q.pop();
                pushQ(i, j-1, n);
                pushQ(i, j+1, n);
                pushQ(i+1, j, n);
                pushQ(i-1, j, n);
            }
            dis++;
        }
        return dis;
    }
};
