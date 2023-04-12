class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnt= 0;
        for (int i=0, j= s.length()-1; i < j; i++, j--) {
            s[i]= tolower(s[i]);
            if(s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]==117)
                cnt++;
            s[j]= tolower(s[j]);
            if(s[j]==97 || s[j]==101 || s[j]==105 || s[j]==111 || s[j]==117)
                cnt--;
        }
        return !cnt;
    }
};
