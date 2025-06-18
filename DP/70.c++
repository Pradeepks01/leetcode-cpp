// Climbing Stairs


// Time Complexity: O(n), Space Complexity: O(1)

class Solution {
public:
    int climbStairs(int n) {
        // If n is 1, 2, or 3, just return n
        if (n <= 3) return n;

        // Store number of ways to reach step 3 and step 2
        int prev1 = 3;
        int prev2 = 2;
        int cur = 0;

        // Start from step 4 to step n
        for (int i = 3; i < n; i++) {
            // Total ways to reach current step
            cur = prev1 + prev2;

            // Move values forward
            prev2 = prev1;
            prev1 = cur;
        }

        // Return ways to reach step n
        return cur;        
    }
};
