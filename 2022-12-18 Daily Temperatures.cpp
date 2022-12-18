class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tp) {
        vector<int> result(tp.size());
        stack<vector<int>> s;
        for (int i= 0; i < tp.size(); ++i) {
            while (!s.empty() and tp[i] > s.top()[0]) {
                result[s.top()[1]]= i- s.top()[1];
                s.pop();
            }
            s.push({tp[i], i});
        }
        return result;
    }
};
