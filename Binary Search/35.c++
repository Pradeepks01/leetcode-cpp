// Search Insert Position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size();  // search in [l, r)
        while (l < r) {
            int m = l + (r - l) / 2; // middle index
            if (nums[m] >= target) {
                r = m;              // shrink right boundary
            } else {
                l = m + 1;          // shrink left boundary
            }
        }
        return l;
    }
};

// Time complexity: O(logn)
// Space complexity: O(1)