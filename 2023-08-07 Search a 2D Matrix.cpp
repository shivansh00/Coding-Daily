class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        const int m= a.size();
        const int n= a[0].size();
        int l= 0, h= m*n -1;
        while (l <= h) {
            int mid= (l+ h)>>1;
            int i= mid/n;
            int j= mid%n;
            if (a[i][j] > target)
                h= mid-1;
            else if (a[i][j] < target)
                l= mid+1;
            else    return true;
        }
        return false;
    }
};
