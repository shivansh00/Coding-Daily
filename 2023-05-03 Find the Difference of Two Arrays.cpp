class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> a, b;
        for (int &i: nums1) a.insert(i);
        for (int &i: nums2) b.insert(i);
        vector<int> x, y;
        for (const int &i: a)   if(b.find(i) == b.end())    x.push_back(i);
        for (const int &i: b)   if(a.find(i) == a.end())    y.push_back(i);
        return {x, y};
    }
};
