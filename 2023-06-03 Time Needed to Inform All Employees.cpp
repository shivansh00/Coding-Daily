class Solution {
    map<int, vector<int>> adj;
    int dfs (int manager, vector<int> &informTime) {
        int maxi= 0;
        for (int employee: adj[manager])
            maxi= max(maxi, dfs(employee, informTime));
        maxi+= informTime[manager];
        return maxi;
    }
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        for (int i= 0; i < n; i++)
            adj[manager[i]].push_back(i);
        return dfs(adj[-1][0], informTime);
    }
};
