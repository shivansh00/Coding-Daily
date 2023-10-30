class Solution {
    vector<vector<int>> m;
    vector<int> ans;
public:
    vector<int> sortByBits(vector<int>& arr) {
        m.resize(14);
        for (int &num: arr) {
            int n= num, cnt= 0;
            while (n) {
                cnt++;
                n&= (n-1);
            }
            m[cnt].push_back(num);
        }
        for (vector<int> &v: m) {
            sort(v.begin(), v.end());
            ans.insert(ans.end(), v.begin(), v.end());
        }
        return ans;
    }
};
