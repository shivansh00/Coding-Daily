class Solution {
    vector<int> dp;
    vector<int> gnums;
public:
    int rob(vector<int>& nums) {
        dp= vector<int>(nums.size(), -1);
        gnums= nums;
        return robbin(nums.size()-1);
    }
    int robbin(int house) {
        if (house < 0)
            return 0;
        if (dp[house] > -1)
            return dp[house];
        return dp[house]= max(robbin(house- 2)+ gnums[house], robbin(house- 1));
    }
};
