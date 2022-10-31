class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n= matrix[0].size();
        for (int k= m-2; k >= 0; k--) {
            int e= matrix[k][0];
            for (int i= k, j= 0; i < m and j < n; ++i, ++j)
                if (matrix[i][j] != e)
                    return false;
        }
        for (int k= n-2; k > 0; k--) {
            int e= matrix[0][k];
            for (int i= 0, j= k; i < m and j < n; ++i, ++j)
                if (matrix[i][j] != e)
                    return false;
        }
        return true;
    }
};
