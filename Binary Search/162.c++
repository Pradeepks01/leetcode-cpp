// Find Peak Element

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;

        while (l < r) {
            int m = (l + r) >> 1; // Same as (l + r) / 2

            // If middle element is greater than its next element,
            // the peak is on the left side including mid
            if (nums[m] > nums[m + 1]) {
                r = m;
            } else {
                // Otherwise, the peak is on the right side
                l = m + 1;
            }
        }

        // l and r converge to the peak element
        return l;
    }
};


// Time complexity: O(log n)
// Space complexity: O(1)