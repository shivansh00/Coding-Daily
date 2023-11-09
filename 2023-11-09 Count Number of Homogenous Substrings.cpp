class Solution {
    const int MOD= 1000000007;
public:
    int countHomogenous(string s) {
        long ans= 0;
        int i= 0;
        while (i < s.length()) {
            int j= i+1;
            while (j < s.length() and s[j] == s[i])
                j++;
            long n= j- i;
            n*= (n+1);
            n/= 2;
            ans= (ans+ n) % MOD;
            i= j;
        }
        return ans;
    }
};
