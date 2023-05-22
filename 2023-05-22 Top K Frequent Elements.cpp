class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ret;
        unordered_map<int, int> fm;
        for (int &n: nums)
            fm[n]++;
        priority_queue<pair<int, int>> pq;
        for (auto &[k, v]: fm)
            pq.push({v, k});
        while (k-- and !pq.empty()) {
            ret.push_back(pq.top().second);
            pq.pop();
        }
        return ret;
    }
};
