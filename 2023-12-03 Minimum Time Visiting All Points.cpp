class Solution {
    int dis= 0;
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        for (int i= 1; i < points.size(); i++)
            dis+= max(abs(points[i][0]-points[i-1][0]), abs(points[i][1]-points[i-1][1]));
        return dis;
    }
};
