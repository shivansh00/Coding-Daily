class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a, b;
        for (const char c: s) {
            if (c == '#') {
                if (!a.empty())
                    a.pop();
            }
            else
                a.push(c);
        }
        for (const char c: t) {
            if (c == '#') {
                if (!b.empty())
                    b.pop();
            }
            else
                b.push(c);
        }
        while (!a.empty() and !b.empty()) {
            if (a.top() != b.top())
                return false;
            a.pop();
            b.pop();
        }
        return a.empty() and b.empty();
    }
};
