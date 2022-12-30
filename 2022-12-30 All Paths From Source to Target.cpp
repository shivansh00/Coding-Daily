class Solution {
    map<int, vector<int>> ad;
    vector<vector<int>> ret;
public:
    void dfs(int node, int n, vector<int>& pb) {
        pb.push_back(node);
        if (node == n) {
            ret.push_back(pb);
            return;
        }
        for (int e: ad[node]) {
            dfs(e, n, pb);
            pb.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        const int n= graph.size();
        vector<int> ans;
        for (int i= 0; i < n; ++i)
            for (int e: graph[i])
                ad[i].push_back(e);
        dfs(0, n-1, ans);
        return ret;
    }
};  
