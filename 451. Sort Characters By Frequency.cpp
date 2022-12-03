class Solution {
public:
    static bool sortByVal(const pair<char, int> &a, const pair<char, int> &b) { 
        return (a.second > b.second);
    } 
    string frequencySort(string s) {
        map<char, int> m;
        for (char c: s)
            m[c]++;
        vector<pair<char, int>> v;
        for (auto& it: m)
            v.push_back({it.first, it.second});
        sort(v.begin(), v.end(), sortByVal);
        string str;
        for (auto ci: v)
            str+= string(ci.second, ci.first);
        return str;
    }
};
