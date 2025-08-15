// Matrix Diagonal Sum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int res = 0, n = mat.size();

        // Loop through each row of the matrix
        for (int r = 0; r < n; r++) {
            res += mat[r][r];               // Primary diagonal element (row == col)
            res += mat[r][n - r - 1];       // Secondary diagonal element (col = n - r - 1)
        }

        // If n is odd, subtract the middle element once (counted twice above)
        return res - (n % 2 == 1 ? mat[n / 2][n / 2] : 0);
    }
};
