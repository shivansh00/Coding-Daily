class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        vector<int> prefix;
        prefix.push_back(0);
        for (int e: nums)
            prefix.push_back(prefix.back()+ e);
        
        vector<int> r;
        for (int q: queries)
            r.push_back(upper_bound(prefix.begin(), prefix.end(), q)- prefix.begin()- 1);
        return r;
    }
};
