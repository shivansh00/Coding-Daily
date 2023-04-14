class Solution {
    vector<vector<int>> dp;
    int findLCS(const string &s, const string &r, int i, int j, const int &n) {
        if (i == n or j == n)   return 0;
        if (dp[i][j] != -1) return dp[i][j];
        if (s[i] == r[j])   return dp[i][j]= 1+ findLCS(s, r, i+1, j+1, n);
        return dp[i][j]= max(findLCS(s, r, i+1, j, n), findLCS(s, r, i, j+1, n));
    }
public:
    int longestPalindromeSubseq(string s) {
        const int n= s.length();
        dp.resize(n, vector<int>(n, -1));
        return findLCS(s, *(new string(s.rbegin(), s.rend())), 0, 0, n);
    }
};
