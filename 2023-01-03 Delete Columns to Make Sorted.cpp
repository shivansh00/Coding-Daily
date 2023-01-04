class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int m= strs[0].size();
        int n= strs.size();
        int cnt= 0;
        for (int i= 0; i < m; i++)
            for (int j= 1; j < n; j++)
                if (strs[j][i] < strs[j-1][i]) {
                    cnt++;
                    break;
                }
        return cnt;
    }
};
