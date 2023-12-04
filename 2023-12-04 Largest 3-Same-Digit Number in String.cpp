class Solution {
    string s= "";
public:
    string largestGoodInteger(string num) {
        for (int i= 2; i < num.size(); i++)
            if (num[i] == num[i-1] and num[i] == num[i-2])
                s= max(s, num.substr(i-2, 3));
        return s;
    }
};
