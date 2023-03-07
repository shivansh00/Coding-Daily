class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l= 1, h= 1e14, mid, trips;
        while (l < h) {
            mid= (l+h)>>1, trips= 0;
            for (const int t: time)
                trips+= mid/t;
            if (trips >= totalTrips)
                h= mid;
            else if (trips < totalTrips)
                l= mid+1;
        }
        return h;   //Both low and high are getting right answers.
    }
};
