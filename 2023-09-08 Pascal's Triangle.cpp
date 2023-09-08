class Solution {
    static vector<vector<int>> pascalsTriangle;
    static int maxi;
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows-1 <= maxi)
            return vector<vector<int>>(pascalsTriangle.begin(), pascalsTriangle.begin()+numRows);
        for (int i= maxi; i < numRows; i++) {
            pascalsTriangle[i].resize(i+1, 1);
            for (int j= 1; j < i; j++)
                pascalsTriangle[i][j]= pascalsTriangle[i-1][j-1]+ pascalsTriangle[i-1][j];
        }
        return vector<vector<int>>(pascalsTriangle.begin(), pascalsTriangle.begin()+numRows);
    }
};

vector<vector<int>> Solution::pascalsTriangle(30);
int Solution::maxi= 0;
