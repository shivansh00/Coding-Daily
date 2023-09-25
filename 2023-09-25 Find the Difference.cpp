class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> fm(26);
        for (char &c: t)
            fm[c-'a']++;
        for (char &c: s)
            fm[c-'a']--;
        for (int i= 0; i < 26; i++)
            if (fm[i] == 1)
                return 'a'+ i;
        return -1;
    }
};
