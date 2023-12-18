class Solution {
    int mini= 1e4, nextMin= 1e4;
    int maxi= 1, nextMax= 1;
public:
    int maxProductDifference(vector<int>& nums) {
        for (int &i: nums) {
            if (i < nextMin)
                if (i < mini) {
                    nextMin= mini;
                    mini= i;
                }
                else
                    nextMin= i;
            if (i > nextMax)
                if (i > maxi) {
                    nextMax= maxi;
                    maxi= i;
                }
                else
                    nextMax= i;
        }
        return maxi*nextMax- mini*nextMin;
    }
};
