class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for (int &s: stones)
            pq.push(s);
        while (pq.size() > 1) {
            int a= pq.top();
            pq.pop();
            a-= pq.top();
            pq.pop();
            if (a)  pq.push(a);
        }
        return pq.empty() ? 0 : pq.top();
    }
};
