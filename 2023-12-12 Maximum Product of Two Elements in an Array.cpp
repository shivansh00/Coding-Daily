class Solution {
    int secondMax= 0, gigaMax= 0;
public:
    int maxProduct(vector<int>& nums) {
        for (int &i: nums)
            if (i > secondMax)
                if (i >= gigaMax) {
                    secondMax= gigaMax;
                    gigaMax= i;
                }
                else
                    secondMax= i;
        return (gigaMax- 1)* (secondMax- 1);
    }
};
