class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        const int n= potions.size();
        for (int &e: spells)
            e= n -(lower_bound(potions.begin(), potions.end(), (double)success/e)- potions.begin());
        return spells;
    }
};
