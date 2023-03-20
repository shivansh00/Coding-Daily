class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        const int fs= f.size();
        if (n > fs) return false;
        if (fs == 1)    return ((!f[0]) >= n);
        if (!f[0] and !f[1] and n)
            n-= f[0]= 1;
        if (!f[fs-2] and !f[fs-1] and n)
            n-= f[fs-1]= 1;
        for (int i= 1; i < fs-1 and n; i++)
            if (!f[i-1] and !f[i] and !f[i+1])
                n-= f[i]= 1;
        return !n;
    }
};
