class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> heap;
        int mini= INT_MAX;

        for (int num: nums) {
            if (num&1)  num= num<<1;
            mini= min(mini, num);
            heap.push(num);
        }
                
        int delta= INT_MAX;
        while((heap.top()&1) == 0) {
            int maxi= heap.top();   heap.pop();
            delta= min(delta, maxi-mini);
            mini= min(maxi>>1, mini);
            heap.push(maxi>>1);
        }
        return min(delta, heap.top()-mini);
    }
};
