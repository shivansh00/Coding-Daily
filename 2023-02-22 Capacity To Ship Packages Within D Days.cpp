class Solution {
public:
    int shipWithinDays(const vector<int>& weights, const int days) {
        int maxi = *max_element(weights.begin(), weights.end());
        const int n = weights.size();
        int low = maxi, cap, high = accumulate(weights.begin(), weights.end(), 0);
        while (low <= high) {
            cap = (low + high) >> 1;
            int d = 1, sum = 0;
            for (const int& wt: weights) {
                sum += wt;
                if (sum > cap) {
                    sum = wt;
                    d++;
                }
            }
            if (d <= days)
                high = cap - 1;
            else
                low = cap + 1;
        }
        return low;
    }
};
