class Solution {
public:
    bool caps(string &word) {
        for (char c: word)
            if (islower(c))
                return false;
        return true;
    }
    bool capitalise(string &word) {
        for (int i= 1; i < word.size(); i++)
            if (isupper(word[i]))
                return false;
        return true;
    }
    bool detectCapitalUse(string word) {
        if (islower(word[0])) {
            for (char c: word)
                if (isupper(c))
                    return false;
            return true;
        }
        return caps(word) or capitalise(word);
    }
};
