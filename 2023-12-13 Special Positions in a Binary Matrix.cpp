class Solution {
    int cnt= 0;
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> row(mat.size()), col(mat[0].size());
        for (int i= 0; i < mat.size(); i++)
            for (int j= 0; j < mat[i].size(); j++)
                if (mat[i][j])
                    row[i]++, col[j]++;
        for (int i= 0; i < mat.size(); i++)
            for (int j= 0; j < mat[i].size(); j++)
                if (mat[i][j] and row[i] == 1 and col[j] == 1)
                    cnt++;
        return cnt;
    }
};
