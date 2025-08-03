// Word Search

class Solution {
public:
    int ROWS, COLS;

    // Main function to check if the word exists in the board
    bool exist(vector<vector<char>>& board, string word) {
        ROWS = board.size();       // Number of rows in the board
        COLS = board[0].size();    // Number of columns in the board

        // Traverse the board to find the starting character of the word
        for (int r = 0; r < ROWS; r++) {
            for (int c = 0; c < COLS; c++) {
                // If DFS from this cell returns true, word exists
                if (dfs(board, word, r, c, 0)) {
                    return true;
                }
            }
        }
        return false;  // Word not found
    }

    // Depth-First Search with backtracking
    bool dfs(vector<vector<char>>& board, string word, int r, int c, int i) {
        // Base Case: All characters matched
        if (i == word.size()) {
            return true;
        }

        // Boundary checks and character match check
        if (r < 0 || c < 0 || r >= ROWS || c >= COLS ||
            board[r][c] != word[i] || board[r][c] == '#') {
            return false;
        }

        // Mark the cell as visited by temporarily modifying it
        board[r][c] = '#';

        // Explore all 4 directions: down, up, right, left
        bool res = dfs(board, word, r + 1, c, i + 1) ||
                   dfs(board, word, r - 1, c, i + 1) ||
                   dfs(board, word, r, c + 1, i + 1) ||
                   dfs(board, word, r, c - 1, i + 1);

        // Backtrack: Restore the original character
        board[r][c] = word[i];

        return res;
    }
};

// Time Complexity: O(m * 4^n)
// Space Complexity: O(n)