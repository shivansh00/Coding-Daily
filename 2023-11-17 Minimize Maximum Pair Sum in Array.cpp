class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int minSum= INT_MIN;
        sort(nums.begin(), nums.end());
        auto fw= nums.begin();
        auto bw= nums.rbegin();
        for (int i= 0; i < nums.size()/2; i++)
            minSum= max(minSum, *fw++ + *bw++);
        return minSum;
    }
};
