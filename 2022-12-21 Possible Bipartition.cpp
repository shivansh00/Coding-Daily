class Solution {
    vector<vector<int>> adj;
    vector<int> colour;
public:
    bool isBipartite(int n, int node) {
        queue<int> q;
        q.push(node);
        colour[node]= 1;
        while(!q.empty()) {
            int curr= q.front();
            q.pop();
            for (int e: adj[curr]) {
                if (colour[curr] == colour[e])
                    return false;
                if (colour[e] == -1) {
                    colour[e]= 1-colour[curr];
                    q.push(e);
                }
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& d) {
        adj= vector<vector<int>>(n+1);
        for (int i= 0; i < d.size(); i++) {
            adj[d[i][0]].push_back(d[i][1]);
            adj[d[i][1]].push_back(d[i][0]);
        }
        colour= vector<int>(n+1, -1);
        for (int i= 1; i <= n; ++i)
            if (colour[i] == -1 and !isBipartite(n, i))
                return false;
        return true;
    }
};
