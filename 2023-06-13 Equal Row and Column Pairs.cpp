class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> rf, cf;
        for (vector<int> &r: grid)
            rf[r]++;
        for (int j, i= 0; i < grid.size(); i++) {
            vector<int> cv;
            for (j= 0; j < grid.size(); j++)
                cv.push_back(grid[j][i]);
            cf[cv]++;
        }
        int ans= 0;
        for (auto &[k, v]: rf)
            ans+= v*cf[k];
        return ans;
    }
};
