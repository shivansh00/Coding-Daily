class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        const int m= mat.size();
        const int n= mat[0].size();
        vector<pair<int, int>> wr;
        for (int i= 0; i < m; i++) {
            int low= 0, mid, high= n-1;
            while (low <= high) {
                mid= (low+ high)>> 1;
                if (mat[i][mid])
                    low= mid+1;
                else
                    high= mid-1;
            }
            wr.push_back({high, i});
        }
        sort (wr.begin(), wr.end());
        vector<int> ret;
        for (int i= 0; i < k; i++)
            ret.push_back(wr[i].second);
        return ret;
    }
};
