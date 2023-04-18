class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        const int m= word1.size(), n= word2.size();
        int i= 0, j= 0;
        string ret;
        while (i < m and j < n) {
            ret.push_back(word1[i++]);
            ret.push_back(word2[j++]);
        }
        if (i < m)
            ret+= string(word1, i, -1);
        if (j < n)
            ret+= string(word2, j, -1);
        return ret;
    }
};
