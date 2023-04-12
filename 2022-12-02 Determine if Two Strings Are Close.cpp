class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length())
            return false;
        unordered_set<char> a, b;
        unordered_map<char, int> m, n;
        for (char c: word1) {
            a.insert(c);
            m[c]++;
        }
        for (char c: word2) {
            b.insert(c);
            n[c]++;
        }
        if (a != b)
            return false;
        vector<int> x, y;
        for (auto it: m)
            x.push_back(it.second);
        for (auto it: n)
            y.push_back(it.second);
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        return x == y;
    }
};
