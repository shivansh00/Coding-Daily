class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue<int> heap;
        const int n= profits.size();
        vector<pair<int, int>> cp(n);
        for (int i= 0; i < n; i++)
            cp[i]= {capital[i], profits[i]};
        sort(cp.begin(), cp.end());
        int i= 0;
        while (k--) {
            while (i < n and cp[i].first <= w)
                heap.push(cp[i++].second);
            if (heap.empty())
                break;
            w+= heap.top();
            heap.pop();
        }
        return w;
    }
};
