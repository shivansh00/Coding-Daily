class Solution {
    set<int> ps;
    multiset<char> cs;
public:
    string sortVowels(string s) {
        for (int i= 0; i < s.size(); i++)
            if (tolower(s[i]) == 'a' or tolower(s[i]) == 'e' or tolower(s[i]) == 'i'
                or tolower(s[i]) == 'o' or tolower(s[i]) == 'u') {
                    cs.insert(s[i]);
                    ps.insert(i);
            }
        auto pitr= ps.begin();
        auto citr= cs.begin();
        while (pitr != ps.end())
            s[*pitr++]= *citr++;
        return s;
    }
};202
