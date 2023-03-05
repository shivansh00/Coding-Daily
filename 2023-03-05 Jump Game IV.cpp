class Solution {
public:
    int minJumps(vector<int>& arr) {
        const int n= arr.size();
        unordered_map<int, vector<int>> m;
        for (int i= 0; i < n; i++)
            m[arr[i]].push_back(i);
        int cnt= 0;
        vector<bool> vis(n);
        queue<int> q;
        vis[0]= true;
        q.push(0);
        q.push(-1);
        while (true) {
            int idx= q.front(); q.pop();
            if (idx == n-1)
                return cnt;
            if (idx == -1) {
                q.push(-1);
                cnt++;
                continue;
            }
            for (const int e: m[arr[idx]])
                if (!vis[e]) {
                    vis[e]= true;
                    q.push(e);
                }
            m[arr[idx]].clear();
            if (idx+1 < n and !vis[idx+1]) {
                vis[idx+1]= true;
                q.push(idx+1);
            }
            if (idx > 0 and !vis[idx-1]) {
                vis[idx-1]= true;
                q.push(idx-1);
            }
        }
        return -1;
    }
};
