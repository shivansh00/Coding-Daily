class Solution {
    map<string, string> m;
public:
    string destCity(vector<vector<string>>& paths) {
        for (vector<string> &path: paths)
            m[path[0]]= path[1];
        string city= paths[0][0];
        while(!m[city].empty())
            city= m[city];
        return city;
    }
};
