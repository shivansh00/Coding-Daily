class Solution {
public:
    string removeDuplicates(string str) {
        stack<char> s;
        for (char c: str) {
            if (s.empty())
                s.push(c);
            else {
                if (s.top() == c)
                    s.pop();
                else
                    s.push(c);
            }
        }
        string zz;
        while(!s.empty()) {
            zz+= s.top();
            s.pop();
        }
        reverse(zz.begin(), zz.end());
        return zz;
    }
};
