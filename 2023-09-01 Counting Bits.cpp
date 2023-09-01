class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i= 0; i <= n; i++) {
            int val= i, cnt= 0;
            while(val) {
                if(val&1) cnt++;
                val>>= 1;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
