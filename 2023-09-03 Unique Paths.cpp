class Solution {
    static vector<vector<int>> dp;
public:
    int uniquePaths(int m, int n) {
        dp[1][1]= 1;
        if (dp[m][n])   return dp[m][n];
        if (m > 1)
            dp[m][n]+= uniquePaths(m-1, n);
        if (n > 1)
            dp[m][n]+= uniquePaths(m, n-1);
        return dp[m][n];
    }
};

vector<vector<int>> Solution::dp(101, vector<int>(101));
