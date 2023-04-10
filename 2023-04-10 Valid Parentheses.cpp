class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (const char c: s) {
            if (c == '(' or c == '{' or c == '[')
                    st.push(c);
            else {
                if (c == ')') {
                    if (!st.empty() and st.top() == '(')
                        st.pop();
                    else
                        return false;
                }
                else if (c == ']') {
                    if (!st.empty() and st.top() == '[')
                        st.pop();
                    else
                        return false;
                }
                else {
                    if (!st.empty() and st.top() == '{')
                        st.pop();
                    else
                        return false;
                }
            }
        }
        return st.empty();
    }
};
