class Solution {
    vector<vector<int>> ret;
    void dfs(int i, const int n, const int k, vector<int> &v) {
        v.push_back(i);
        if (!k) {
            ret.push_back(v);
            v.pop_back();
            return;
        }
        for (int j= i+1; j <= n; j++)
            dfs(j, n, k-1, v);
        v.pop_back();
    }
public:
    vector<vector<int>> combine(const int n, const int k) {
        for (int i= 1; i <= n; i++)
        dfs(i, n, k-1, *(new vector<int>));
        return ret;
    }
};
