class Solution {
    vector<bool> ret;
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        ret.resize(l.size());
        for (int i= 0; i < l.size(); i++) {
            vector<int> v(nums.begin()+l[i], nums.begin()+r[i]+1);
            sort(v.begin(), v.end());
            const int diff= v[1]- v[0];
            bool flag= true;
            for (int j= 1; j <= r[i]-l[i]; j++)
                if (v[j]-v[j-1] != diff) {
                    flag= false;
                    break;
                }
            ret[i]= flag;
        }
        return ret;
    }
};
