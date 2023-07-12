class Solution {
    map<int, vector<int>> adj;
    vector<int> vis, safe;
    bool isSafe(const int node) {
        if (safe[node])
            return true;
        if (vis[node])
            return false;
        vis[node]= true;
        for (const int i: adj[node])
            if (!isSafe(i))
                return false;
        vis[node]= false;
        safe[node]= true;
        return true;
    }
public:
    vector<int> eventualSafeNodes(const vector<vector<int>>& graph) {
        const int n= graph.size();
        vis.resize(n);
        safe.resize(n);
        for (int i= 0; i < n; ++i)
            for (const int e: graph[i])
                adj[i].push_back(e);
        vector<int> ret;
        for (int i= 0; i < n; ++i) {
            if (!safe[i])
                safe[i]= isSafe(i);
            if (safe[i])
                ret.push_back(i);
        }
        return ret;
    }
};
