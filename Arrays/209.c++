// Minimum Size Subarray Sum

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;                 // Left pointer for the sliding window
        int total = 0;             // To store current window sum
        int res = INT_MAX;         // Store minimum length found, initialized with max value

        for (int r = 0; r < nums.size(); r++) {
            total += nums[r];     // Expand window by including nums[r]

            // Shrink the window from the left as long as the sum is >= target
            while (total >= target) {
                res = min(res, r - l + 1);  // Update minimum length
                total -= nums[l];          // Shrink window from the left
                l++;
            }
        }

        // If no valid subarray found, return 0
        return res == INT_MAX ? 0 : res;
    }
};


// Time complexity: O(n)
// Space complexity: O(1)