class Solution {
    bool isClosedIsland(vector<vector<int>> &grid, const int i, const int j) {
        const int m= grid.size();
        const int n= grid[0].size();

        if (grid[i][j])
            return true;
        grid[i][j]= 1;
        
        bool up     = j         ? isClosedIsland(grid, i, j-1) : false;
        bool down   = j+1 < n   ? isClosedIsland(grid, i, j+1) : false;
        bool left   = i         ? isClosedIsland(grid, i-1, j) : false;
        bool right  = i+1 < m   ? isClosedIsland(grid, i+1, j) : false;

        if (!up or !down or !left or !right)
            return false;
        return true;
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        int cnt= 0;
        const int m= grid.size();
        const int n= grid[0].size();
        for (int i= 0; i < m; ++i)
            for (int j= 0; j < n; j++)
                if (!grid[i][j] and isClosedIsland(grid, i, j))
                    cnt++;
        return cnt;
    }
};
