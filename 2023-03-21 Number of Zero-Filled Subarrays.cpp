class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt= 0, l= 0, r;
        const int n= nums.size();
        while (l < n) {
            while (l < n and nums[l])   l++;
            r= l;
            while (r < n and !nums[r])  r++;
            cnt+= ((r-l)*(r-l+1))>>1;
            l= r;
        }
        return cnt;
    }
};
