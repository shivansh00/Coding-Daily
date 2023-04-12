class Solution {
public:
    string simplifyPath(string path) {
        stack<string> s;
        stringstream ss(path);
        string token, ans;
        while (getline(ss, token, '/')) {
            if (token == "." or token == "")    continue;
            if (token == "..") {
                if (!s.empty()) s.pop();
            }
            else    s.push(token);
        }
        while (!s.empty()) {
            ans= "/"+s.top()+ ans;
            s.pop();
        }
        if (ans.empty())    ans.push_back('/');
        return ans;
    }
};
