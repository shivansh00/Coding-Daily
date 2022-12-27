class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int ar) {
        int n= rocks.size();
        vector<int> diff;
        int cnt= 0;
        for (int i= 0; i < n; i++)
            diff.push_back(capacity[i]-rocks[i]);
        sort(diff.begin(), diff.end());
        auto it= diff.begin();
        while (ar > 0 and it!= diff.end()) {
            ar-= *it++;
            cnt++;
        }
        if (ar < 0)
            cnt--;
        return cnt;
    }
