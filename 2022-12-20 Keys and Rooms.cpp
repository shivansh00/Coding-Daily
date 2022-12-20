class Solution {
    vector<bool> vis;
public:
    void dfs (int i, vector<vector<int>>& rooms) {
        vis[i]= true;
        for (int e: rooms[i])
            if(!vis[e])
                dfs(e, rooms);
        return;
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vis= vector<bool>(rooms.size());
        vis[0]= true;
        for (int i: rooms[0])
            if (!vis[i])
                dfs(i, rooms);
        for (bool r: vis)
            if (!r)
                return false;
        return true;
    }
};
