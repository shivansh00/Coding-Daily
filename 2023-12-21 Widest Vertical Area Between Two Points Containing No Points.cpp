class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        set<int> abcissa;
        for (vector<int> &cord: points)
            abcissa.insert(cord[0]);
        int diff= 0;
        for (auto it= abcissa.begin(), itr= it++; it != abcissa.end(); it++, itr++)
            diff= max(diff, abs(*itr- *it));
        return diff;
    }
};
