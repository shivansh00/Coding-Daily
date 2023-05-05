class Solution {
    inline bool isVowel(char &c) {
        return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
    }
public:
    int maxVowels(string s, int k) {
        const int n= s.length();
        int cnt= 0;
        for (int i= 0; i < k; i++)
            cnt+= isVowel(s[i]);
        int ans= cnt;
        for (int i= k; i < n; i++) {
            cnt+= isVowel(s[i])- isVowel(s[i-k]);
            ans= max(ans, cnt);
        }
        return ans;
    }
};
