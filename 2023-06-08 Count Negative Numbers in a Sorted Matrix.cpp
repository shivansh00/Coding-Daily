class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        const int m= grid.size();
        const int n= grid[0].size();
        int low= 0, mid, high= m;
        while (low < high) {
            mid= (low+ high)>>1;
            if (grid[mid][0] >= 0)
                low= mid+1;
            else
                high= mid;         
        }
        int ans= (m-high)*n;
        for (int i= 0; i < high; i++) {
            int l= 0, h= n;
            while (l < h) {
                mid= (l+h)>>1;
                if (grid[i][mid] >= 0)
                    l= mid+1;
                else
                    h= mid;
            }
            ans+= n-h;
        }
        return ans;
    }
};
