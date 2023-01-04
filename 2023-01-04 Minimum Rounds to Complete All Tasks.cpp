class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int cnt= 0;
        map<int, int> fm;
        for (int i: tasks)
            fm[i]++;
        for (auto& it: fm) {
            if (it.second == 1)
                return -1;
            cnt+= ceil(it.second/3.0);
        }
        return cnt;
    }
};
