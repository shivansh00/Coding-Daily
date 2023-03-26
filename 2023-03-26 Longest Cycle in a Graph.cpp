class Solution {
    vector<pair<bool, int>> vis;
    int maxi= -1;
    bool dfs(vector<int>& edges, int start, int i, int dis) {
        if (vis[i].first) {
            if (i != start) return false;
            maxi= max(maxi, dis-vis[i].second);
            return true;
        }
        vis[i].first= true;
        vis[i].second= dis;
        if (edges[i] != -1 and dfs(edges, start, edges[i], dis+1))
            return true;
        vis[i].first= false;
        return false;
    }
public:
    int longestCycle(vector<int>& edges) {
        const int n= edges.size();
        vis.resize(n);
        for (int i= 0; i < n; i++)
            if (!vis[i].first)
                dfs(edges, i, i, 0);
        return maxi;
    }
};
