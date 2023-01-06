class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        vector<long> tc= {0};
        for (long i: costs)
            tc.push_back(tc.back()+i);
        int ans= upper_bound(tc.begin(), tc.end(), coins)- tc.begin()- 1;
        return ans;
    }
};
