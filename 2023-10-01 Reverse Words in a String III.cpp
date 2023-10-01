class Solution {
    string a;
public:
    string reverseWords(string s) {
        stringstream ss(s);
        while (ss >> s) {
            reverse(s.begin(), s.end());
            a+= s+' ';
        }
        a.pop_back();
        return a;
    }
};
