class Solution {
    int cnt= 0;
public:
    int hammingWeight(uint32_t n) {
        while (n) {
            n&= n-1;
            cnt++;
        }
        return cnt;
    }
};
