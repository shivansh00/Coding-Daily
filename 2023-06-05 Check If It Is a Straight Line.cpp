class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& points) {
        int x= points[1][0]-points[0][0];
        int y= points[1][1]-points[0][1];
        for (int i= 1; i < points.size(); i++)
            if ((points[i][0]-points[1][0])*y != (points[i][1]- points[1][1])*x)
                return false;
        return true;
    }
};
