class Solution {
public:
    int minDistance(string a, string b) {
        const int m= a.length();
        const int n= b.length();
        vector<vector<int>> dp(m+1, vector<int>(n+1));
        for (int i= 0; i <= m; i++) dp[i][0]= i;
        for (int j= 0; j <= n; j++) dp[0][j]= j;

        for (int i= 1; i <= m; ++i)
            for (int j= 1; j <= n; ++j) {
                if (a[i-1] == b[j-1])
                    dp[i][j]= dp[i-1][j-1];
                else
                    dp[i][j]= 1+ min({dp[i][j-1], dp[i-1][j-1], dp[i-1][j]});
            }
        return dp[m][n];
    }
};
