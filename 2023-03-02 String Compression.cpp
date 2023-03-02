class Solution {
public:
    int compress(vector<char>& chars) {
        const int n= chars.size();
        int i= 0, j= 0;
        while (i < n) {
            char c= chars[i];
            int cnt= 0;
            while (i < n and chars[i] == c) {
                cnt++;
                i++;
            }
            chars[j++]= c;
            if (cnt == 1)
                continue;
            stack<int> s;
            while (cnt) {
                s.push(cnt%10);
                cnt/= 10;
            }
            while (!s.empty()) {
                chars[j++]= '0'+s.top();
                s.pop();
            }
        }
        return j;
    }
};
