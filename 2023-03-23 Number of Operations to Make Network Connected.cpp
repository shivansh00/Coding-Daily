class Solution {
    vector<bool> vis;
    map<int, vector<int>> adj;
    void dfs(const int pc) {
        vis[pc]= true;
        for (const int &npc: adj[pc])
            if (!vis[npc])
                dfs(npc);
        return;
    }
public:
    int makeConnected(const int n, const vector<vector<int>>& connections) {
        if (connections.size() < n-1)
            return -1;
        vis.resize(n);
        int cnt= -1;
        for (const vector<int> pc: connections) {
            adj[pc[0]].push_back(pc[1]);
            adj[pc[1]].push_back(pc[0]);
        }
        for (int i= 0; i < n; i++)
            if (!vis[i]) {
                cnt++;
                dfs(i);
            }
        return cnt;
    }
};
