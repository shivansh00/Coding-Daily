class Solution {
public:
    int similarPairs(vector<string>& words) {
        int n= words.size();
        vector<vector<bool>> fm(n, vector<bool>(123));
        for (int i= 0; i < n; ++i)
            for (char c: words[i]) {
                fm[i][c]= true;
            }
        int cnt= 0;
        for (int i= 0; i < n; ++i)
            for (int j= i+1; j < n; ++j) {
                if (fm[i] == fm[j])
                    cnt++;
            }
        return cnt;
    }
};
