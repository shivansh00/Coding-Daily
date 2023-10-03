class Solution {
    int good= 0;
public:
    int numIdenticalPairs(vector<int>& nums) {
        for (int i= 0; i < nums.size(); i++)
            for (int j= i+1; j < nums.size(); j++)
                if (nums[i] == nums[j])
                    good++;
        return good;
    }
};
