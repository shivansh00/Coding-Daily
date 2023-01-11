class Solution {
    map<int, vector<int>> adj;
    vector<bool> vis;
public:
    pair<bool, int> pathSum(int node, vector<bool>& hasApple) {
        if (vis[node])
            return make_pair(false, 0);
        vis[node]= true;
        bool flag= hasApple[node];
        int currSum= 0;
        for (const int &e: adj[node]) {
            pair<bool, int> tmp= pathSum(e, hasApple);
            if (tmp.first) {
                flag= true;
                currSum+= tmp.second;
            }
        }
        if (flag)
            currSum+= 2;
        return make_pair(flag, currSum);
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vis= vector<bool>(n);
        for (const vector<int> &v: edges) {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        return max(0, pathSum(0, hasApple).second-2);
    }
};
