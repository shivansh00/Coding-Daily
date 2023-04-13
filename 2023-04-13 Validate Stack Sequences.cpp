class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int i= 0, n= popped.size();
        for (int &e: pushed) {
            s.push(e);
            while (i < n and !s.empty() and s.top() == popped[i]) {
                s.pop();
                i++;
            }
            if (i == n) return true;
        }
        return false;
    }
};
