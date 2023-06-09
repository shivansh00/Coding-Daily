class Solution {
public:
    char nextGreatestLetter(const vector<char>& letters, char target) {
        auto it= upper_bound(letters.begin(), letters.end(), target);
        if (it != letters.end())
            return *it;
        return letters[0];
    }
};
