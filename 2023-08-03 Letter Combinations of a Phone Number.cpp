class Solution {
    map<char, vector<char>> m;
    vector<string> ret;
    void helper(const string &d, const int i, const int &n, string s) {
        if (i == n) {
            ret.push_back(s);
            return;
        }
        for (const char &c: m[d[i]])
            helper(d, i+1, n, s+c);
        return;
    }
public:
    vector<string> letterCombinations(string digits) {
        const int n= digits.length();
        if (!n) return {};
        char c, i= '2';
        for (c= 'a'; c < 's'; c+= 3)
            m[i++]= {c, char(c+1), char(c+2)};
        m[i-1].push_back(c);
        m[i]= {char(c+1), char(c+2), char(c+3)};
        m[i+1]= {char(c+4), char(c+5), char(c+6), char(c+7)};
        helper(digits, 0, n, "");
        return ret;
    }
};
