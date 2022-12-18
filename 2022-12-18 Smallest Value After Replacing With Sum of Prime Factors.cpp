class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1)
            return false;
        if (n <= 3)
            return true;
        if (n % 2 == 0 || n % 3 == 0)
            return false;

        for (int i = 5; i * i <= n; i = i + 6)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;

        return true;
    }
    int putSum(int n) {
        int sum= 0, c=2;
        while(n>1) {
            if(n%c==0){
                sum+= c;
                n/=c;
            }
            else c++;
        }
        return sum;
    }
    int smallestValue(int n) {
        if (n == 4)
            return 4;
        while (!isPrime(n)) {
            int sum= 0, c=2;
            while(n>1) {
                if(n%c==0){
                    sum+= c;
                    n/=c;
                }
                else c++;
            }
            n= sum;
        }
        return n;
    }
};
