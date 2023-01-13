class Solution {
private:
    int gmax= 1;
    map<int, vector<int>> adj;
    int findPath(int node, string &s) {
        priority_queue<int> pq;
        for (const int &child: adj[node])
            if (s[child] != s[node])
                pq.push(findPath(child, s));
            else
                findPath(child, s);
        if (pq.empty())
            return 1;
        int maxi= pq.top()+ 1;    pq.pop();
        int ret= maxi;
        if (!pq.empty())
            maxi+= pq.top();
        gmax= max(gmax, maxi);
        return ret;
    }
public:
    int longestPath(vector<int>& parent, string s) {
        for (int i= 1; i != parent.size(); ++i)
            adj[parent[i]].push_back(i);
        findPath(0, s);
        return gmax;
    }
};
