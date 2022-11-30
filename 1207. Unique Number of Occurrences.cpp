class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> fm, ffm;
        for (int e: arr)
            fm[e]++;
        for (auto it: fm) {
            ffm[it.second]++;
            if (ffm[it.second] > 1)
                return false;
        }
        return true;
    }
};
