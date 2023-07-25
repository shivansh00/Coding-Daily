class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l= 1, h= arr.size()-2;
        while (l <= h) {
            int mid= (l+h)>>1;
            if (arr[mid] < arr[mid-1])
                h= mid-1;
            else if (arr[mid] < arr[mid+1])
                l= mid+1;
            else
                return mid;
        }
        return -1;
    }
};
