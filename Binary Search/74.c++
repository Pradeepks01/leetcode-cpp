// Search a 2D Matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ROWS = matrix.size(), COLS = matrix[0].size();  // Get number of rows and columns

        int l = 0, r = ROWS * COLS - 1;  // Treat 2D matrix as a 1D array, set search boundaries

        while (l <= r) {
            int m = l + (r - l) / 2;  // Middle index in virtual 1D array
            int row = m / COLS, col = m % COLS;  // Convert 1D index back to 2D coordinates

            if (target > matrix[row][col]) {
                l = m + 1;  // Search right half
            } else if (target < matrix[row][col]) {
                r = m - 1;  // Search left half
            } else {
                return true;  // Target found
            }
        }
        return false;  // Target not found
    }
};


// Time complexity: O(log(m * n))
// Space complexity: O(1)