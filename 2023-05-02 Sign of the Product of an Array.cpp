class Solution {
public:
    int arraySign(vector<int> &nums) {
        int ans= 1;
        for (int &e: nums)
            if (e < 0)
                ans= -ans;
            else if (e == 0)
                return 0;
        return ans;
    }
};
