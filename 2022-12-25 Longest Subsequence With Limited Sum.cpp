class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        vector<int> r;
        for (int q: queries) {
            int sum= 0, cnt= 0;
            for (int e: nums) {
                sum+= e;
                if (sum <= q)   cnt++;
                else            break;
            }
            r.push_back(cnt);
        }
        return r;
    }
};
