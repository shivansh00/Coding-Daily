class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cur= nums[0];
        int k= 1;
        for (int i= 1; i < nums.size(); i++) {
            if (nums[i] == cur)
                nums[i]= INT_MAX;
            else
                cur= nums[i], k++;
        }
        sort(nums.begin(), nums.end());
        return k;
    }
};
