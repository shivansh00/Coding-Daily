class Solution {
    int peak= 0;
    int alt= 0;
public:
    int largestAltitude(vector<int>& gain) {
        for (int &g: gain) {
            alt+= g;
            peak= max(peak, alt);
        }
        return peak;
    }
};
