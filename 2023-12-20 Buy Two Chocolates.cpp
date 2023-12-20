class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int mini= 100, nextMin= 100;
        for (int &e: prices) {
            if (e < nextMin)
                if (e < mini) {
                    nextMin= mini;
                    mini= e;
                }
                else
                    nextMin= e;
        }
        mini+= nextMin;
        if (mini <= money)
            money-= mini;
        return money;
    }
};
