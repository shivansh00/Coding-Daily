class Solution {
public:
    int totalMoney(int n) {
        int w= n/7;
        int money= w*(56 + (w-1)* 7)/ 2;
        int d= n%7;
        for (int i= w+1; d > 0; d--, i++)
            money+= i;
        return money;
    }
};
