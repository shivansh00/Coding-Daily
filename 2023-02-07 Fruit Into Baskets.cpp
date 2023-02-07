class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int, int> fm;
        int l= 0, total= 0, maxi= 0;
        for (int r= 0; r < fruits.size(); ++r) {
            fm[fruits[r]]++;
            total++;

            while (fm.size() > 2) {
                fm[fruits[l]]--;
                total--;
                if (!fm[fruits[l]])
                    fm.erase(fruits[l]);
                l++;
            }

            maxi= max(maxi, total);
        }
        return maxi;
    }
};
