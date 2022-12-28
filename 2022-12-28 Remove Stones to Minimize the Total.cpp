class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> o, e;
        for (int i: piles)
            if (i&1)
                o.push(i);
            else
                e.push(i);
        int i= 0;
        while (i < k) {
            if (o.empty() or e.empty())
                break;
            int a= o.top(), b= e.top();
            if (a > b and a+1 != b) {
                a-= a/2;
                o.pop();
                o.push(a);
            }
            else {
                b-= b/2;
                e.pop();
                e.push(b);
            }
            i++;
        }
        if (o.empty())
            while (i < k) {
                int b= e.top();
                b-= b/2;
                e.pop();
                e.push(b);
                i++;
            }
        if (e.empty())
            while (i < k) {
                int a= o.top();
                a-= a/2;
                o.pop();
                o.push(a);
                i++;
            }
        int sum= 0;
        while (!o.empty()) {
            sum+= o.top();
            o.pop();
        }
        while (!e.empty()) {
            sum+= e.top();
            e.pop();
        }
        return sum;
    }
};
