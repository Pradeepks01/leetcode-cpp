// Search in Rotated Sorted Array


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;

        while (l <= r) {
            int mid = (l + r) / 2;

            // 🟩 Case 1: Found the target
            if (target == nums[mid]) {
                return mid;
            }

            // 🟦 Case 2: Left half is sorted
            if (nums[l] <= nums[mid]) {
                // Check if target lies within this left sorted half
                if (target > nums[mid] || target < nums[l]) {
                    l = mid + 1;  // Target is in right half
                } else {
                    r = mid - 1;  // Target is in left half
                }
            } 
            // 🟥 Case 3: Right half is sorted
            else {
                // Check if target lies within this right sorted half
                if (target < nums[mid] || target > nums[r]) {
                    r = mid - 1;  // Target is in left half
                } else {
                    l = mid + 1;  // Target is in right half
                }
            }
        }

        return -1; // Target not found
    }
};


// Time Complexity: O(log n), Space Complexity: O(1)
// where n = number of elements in nums array