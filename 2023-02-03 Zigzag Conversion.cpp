class Solution {
public:
    string convert(const string &s, const int &n) {
        const int l= s.length();
        if (n == 1)
            return s;
        int m= 2*(n-1);
        string ans[n];
        for (int itr= 0, i= 1, c= 0; c < l; c++, itr= (itr+1)%m) {
            int row= itr;
            if (row >= n)
                row= 2*n- row- 2;
            ans[row]+= s[c];
        }
        string ret;
        for (const string &rs: ans)
            ret+= rs;
        return ret;
    }
};
