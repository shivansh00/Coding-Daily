class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> preSum(nums.size());
        preSum[0]= nums[0];
        for (int i= 1; i < nums.size(); i++)
            preSum[i]= nums[i]+ preSum[i-1];
        
        vector<int> result(nums.size());
        result[0]= preSum.back()- nums[0]*nums.size();
        for (int i= 1; i < nums.size(); i++) {
            long long ans= nums[i]*i- preSum[i-1];
            ans+= preSum.back()- preSum[i]- nums[i]*(nums.size()-1-i);
            result[i]= ans;
        }
        return result;
    }
};
