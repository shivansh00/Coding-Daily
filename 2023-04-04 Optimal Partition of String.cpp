class Solution {
public:
    int partitionString(string s) {
        unordered_set<char> st;
        int cnt= 1;
        for (const char &c: s) {
            if (st.find(c) != st.end()) {
                st.clear();
                cnt++;
            }
            st.insert(c);
        }
        return cnt;
    }
};
