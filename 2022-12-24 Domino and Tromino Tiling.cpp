class Solution {
    vector<long int> fib= vector<long int>(1001);
    int mod= 1e9+7;
public:
    long long numTilings(int n) {
        if (n < 3)
            return max(1, n);
        return fib[n] ? fib[n] : fib[n]= (2*numTilings(n-1)+numTilings(n-3))%mod;
    }
};
