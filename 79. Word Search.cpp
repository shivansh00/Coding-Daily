class Solution {
public:
    bool findWord(vector<vector<char>> &m, string &word, int i, int j, int k, vector<vector<bool>> &vis) {
        if (k == word.size())
            return true;
        vis[i][j]= true;
        if (i-1 >= 0 and m[i-1][j] == word[k] and !vis[i-1][j]) {
            vis[i-1][j]= true;
            if (findWord(m, word, i-1, j, k+1, vis))
                return true;
            vis[i-1][j]= false;
        }
        if (i+1 < m.size() and m[i+1][j] == word[k] and !vis[i+1][j]) {
            vis[i+1][j]= true;
            if (findWord(m, word, i+1, j, k+1, vis))
                return true;
            vis[i+1][j]= false;
        }
        if (j-1 >= 0 and m[i][j-1] == word[k] and !vis[i][j-1]) {
            vis[i][j-1]= true;
            if (findWord(m, word, i, j-1, k+1, vis))
                return true;
            vis[i][j-1]= false;
        }
        if (j+1 < m[i].size() and m[i][j+1] == word[k] and !vis[i][j+1]) {
            vis[i][j+1]= true;
            if (findWord(m, word, i, j+1, k+1, vis))
                return true;
            vis[i][j+1]= false;
        }
        vis[i][j]= false;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
            vector<vector<bool>> vis(board.size(), vector<bool>(board[0].size()));
        for (int i= 0; i < board.size(); ++i)
            for (int j= 0; j < board[i].size(); ++j)
                if (board[i][j] == word[0])
                    if (findWord(board, word, i, j, 1, vis))
                        return true;
        return false;
    }
};
