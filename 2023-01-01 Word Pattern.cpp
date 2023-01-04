class Solution {
public:
    bool wordPattern(string p, string s) {
        map<char, string> m;
        stringstream ss(s);
        string t;
        vector<string> str;
        while (ss >> t)
            str.push_back(t);
        if (p.length() != str.size())
            return false;
        for (int i= 0, n= p.length(); i < n; ++i) {
            if (m.find(p[i]) == m.end())
                m[p[i]]= str[i];
            else if (m[p[i]] != str[i])
                return false;
        }
        for (auto itr= m.begin(); itr != m.end();  itr++) {
            for (auto it= (++itr)--; it != m.end(); it++)
                if (itr->second == it->second)
                    return false;
        }
        return true;
    }
};
