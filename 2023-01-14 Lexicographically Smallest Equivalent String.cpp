class Solution {
    int a[123]= {};
    int find(int x) {
        if (!a[x])
            return x;
        return a[x]= find(a[x]);
    }
    void Union(int x, int y) {
        x = find(x);
        y = find(y);
        
        if (x != y)
            a[max(x, y)] = min(x, y); 
    }
public:
    string smallestEquivalentString(string s, string t, string baseStr) {
        const int n= s.length();
        for (int i= 0; i < n; ++i)
            if (s[i] != t[i])
                Union(s[i], t[i]);
        for (char &c: baseStr)
            if (a[c])
                c= find(c);
        return baseStr;
    }
};
