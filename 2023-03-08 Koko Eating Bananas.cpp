class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low= 1, high= 1e9, mid;
        while (low <= high) {
            mid= (low+high)>>1;
            long time= 0;
            for (const int bnn: piles)
                time+= bnn/mid+ ((bnn%mid)? 1: 0);
            if (time > h)
                low= mid+1;
            else if (time <= h)
                high= mid-1;
        }
        return low;
    }
};
