class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char, int>, vector<string>> ana;
        for (string s: strs) {
            map<char, int> fm;  //vector<int> fm(123); can also be used
            for (char c: s)     //but same changes should be refactored in the whole code.
                fm[c]++;
            ana[fm].push_back(s);
        }
        vector<vector<string>> ret;
        for (auto it: ana)
            ret.push_back(it.second);
        return ret;
    }
};
