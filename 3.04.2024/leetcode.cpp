class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (dfs(board, i, j, word, 0, visited)) {
                    return true;
                }
            }
        }
        return false;
    }
    
    bool dfs(vector<vector<char>>& board, int i, int j, string& word, int k, vector<vector<bool>>& visited) {
        if (k == word.size()) {
            return true;
        }
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || visited[i][j] || board[i][j] != word[k]) {
            return false;
        }
        
        visited[i][j] = true;
        if (dfs(board, i + 1, j, word, k + 1, visited) ||
            dfs(board, i - 1, j, word, k + 1, visited) ||
            dfs(board, i, j + 1, word, k + 1, visited) ||
            dfs(board, i, j - 1, word, k + 1, visited)) {
            return true;
        }
        
        visited[i][j] = false; // Backtrack
        return false;
    }
};