class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int cnt= 0, i= 0;
        while (k) {
            cnt++;
            if (i < arr.size() and arr[i] == cnt)
                i++;
            else
                k--;
        }
        return cnt;
    }
};
