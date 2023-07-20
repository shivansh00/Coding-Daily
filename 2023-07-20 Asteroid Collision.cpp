class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        for (int &e: asteroids) {
            if (e < 0) {
                bool put= true;
                while (!s.empty() and s.top() > 0 and put) {
                    if (-e > s.top())
                        s.pop();
                    else if (-e == s.top()) {
                        s.pop();
                        put= false;
                    }
                    else
                        put= false;
                }
                if (put)
                    s.push(e);
            }
            else    s.push(e);
        }
        vector<int> ans(s.size());
        for (int i= s.size()-1; i >= 0; i--) {
            ans[i]= s.top();
            s.pop();
        }
        return ans;
    }
};
