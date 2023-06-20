class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if (k == 0) return nums;    //Not necessary, but fastly returns.
        const int r= 2*k + 1;
        const int n= nums.size();
        vector<long> preSum;
        vector<int> ans(n, -1);
        if (n < r)  return ans;     //Not necessary, but fastly returns.
        preSum.push_back(nums.front());
        for (int i= 1; i < n; i++)
            preSum.push_back(preSum.back()+nums[i]);
        if (2*k < preSum.size())    ans[k]= preSum[2*k]/r;
        for (int i= k+1; i+k < preSum.size(); i++)
            ans[i]= (preSum[i+k]- preSum[i-k-1])/r;
        return ans;
    }
};
