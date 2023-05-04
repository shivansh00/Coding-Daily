class Solution {
    vector<bool> banned;
    void ban(string &senate, const char toBan, int idx, const int &n) {
        while (true) {
            if (senate[idx] == toBan and !banned[idx]) {
                banned[idx]= true;
                break;
            }
            idx= (idx+1)%n;
        }
        return;
    }
public:
    string predictPartyVictory(string senate) {
        const int n= senate.size();
        banned.resize(n);
        int r= 0, d= 0;
        for (char &c: senate)
            if (c == 'R')   r++;
            else            d++;
        for (int i= 0; r and d; i= (i+1)%n) {
            if (banned[i])  continue;
            if (senate[i] == 'R') {
                ban(senate, 'D', (i+1)%n, n);
                d--;
            }
            else {
                ban(senate, 'R', (i+1)%n, n);
                r--;
            }
        }
        if (r)  return "Radiant";
        return "Dire";
    }
};
