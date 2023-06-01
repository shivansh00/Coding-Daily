class Solution {
    const static vector<pair<int, int>> ds;
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        const int n= grid[0].size();
        if (grid[0][0] or grid[n-1][n-1])
            return -1;
        queue<pair<int, int>> q;
        int dis= 1;
        q.push({0, 0});
        grid[0][0]= 1;
        q.push({-1, -1});
        while (!q.empty()) {
            auto [x, y]= q.front(); q.pop();
            if (x == -1) {
                if (q.empty())
                    return -1;
                dis++;
                q.push({-1, -1});
                continue;
            }
            if (x == n-1 and y == n-1)
                return dis;
            for (auto [i, j]: ds) {
                i+= x, j+= y;
                if (i >= 0 and i < n and j >= 0 and j < n and !grid[i][j]) {
                    q.push({i, j});
                    grid[i][j]= 1;
                }
            }
        }
        return dis;
    }
};

const vector<pair<int, int>> Solution::ds = {{1, 1}, {0, 1}, {1, 0}, {-1, 1}, {1, -1}, {-1, 0}, {0, -1}, {-1, -1}};
