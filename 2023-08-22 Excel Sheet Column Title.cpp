class Solution {
public:
    string convertToTitle(int cn) {
        string s;
        int mod;
        while (cn > 0) {
            cn--;
            mod= cn%26;
            s= char('A'+mod)+s;
            cn/= 26;
        }
        return s;
    }
};
