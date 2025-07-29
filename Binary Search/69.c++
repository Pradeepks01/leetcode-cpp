// Sqrt(x)


class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = x;         // Binary search range: from 0 to x
        int res = 0;              // To store the closest valid result (m*m <= x)

        while (l <= r) {
            int m = l + (r - l) / 2; // Midpoint (avoids overflow)
            
            // Prevent overflow by casting m to long long before multiplication
            if ((long long) m * m > x) {
                r = m - 1;          // Too big, move search left
            } else if ((long long) m * m < x) {
                l = m + 1;          // Too small, move right
                res = m;            // m is a possible answer (store it)
            } else {
                return m;           // Perfect square found
            }
        }

        return res; // Return the integer part of the square root
    }
};


// Time Complexity: O(log x)
// Space Complexity: O(1)