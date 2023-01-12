class Solution {
    vector<bool> vis;
    vector<int> result;
    map<int, vector<int>> adj;
public:
    vector<int> dfs(int node, string &labels) {
        vector<int> ans(26, 0);
        result[node]= 1;
        ans[labels[node] - 'a']= 1;

        for (const int &e: adj[node])
            if (!result[e]) {
                vector<int> tmp = dfs(e, labels);
                for(int j = 0; j != 26; j++)
                    ans[j] += tmp[j];
            }

        result[node] = ans[labels[node] - 'a'];
        return ans;
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vis.resize(n);
        result.resize(n);
        for (vector<int> v: edges) {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        dfs(0, labels);
        return result;
    }
};
