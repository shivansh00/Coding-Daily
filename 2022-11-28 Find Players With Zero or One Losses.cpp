class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> mp, mw, ml;
        for (vector<int> match: matches)
            mp[match[0]]++, mp[match[1]]++, mw[match[0]]++;
        vector<int> ace, jack;
        for (auto it: mp) {
            if (mw[it.first] == it.second)
                ace.push_back(it.first);
            else if(mw[it.first] == it.second-1)
                jack.push_back(it.first);
        }
        sort(ace.begin(), ace.end());
        sort(jack.begin(),jack.end());
        return {ace, jack};
    }
};
