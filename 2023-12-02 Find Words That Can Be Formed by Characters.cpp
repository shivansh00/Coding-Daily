class Solution {
    int fm[26]= {};
    int sum= 0;
public:
    int countCharacters(vector<string>& words, string chars) {
        for (char &c: chars)
            fm[c-'a']++;
        for (string &word: words) {
            bool flag= true;
            int tmp[26]= {};
            for (char &c: word) {
                short int i= c-'a';
                if (++tmp[i] > fm[i]) {
                    flag= false;
                    break;
                }
            }
            if (flag)
                sum+= word.size();
        }
        return sum;
    }
};
