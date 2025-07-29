// Single Element in a Sorted Array

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size(); // Size of the array

        // Edge cases:
        if (n == 1) return nums[0]; // Only one element
        if (nums[0] != nums[1]) return nums[0]; // Unique element at start
        if (nums[n - 1] != nums[n - 2]) return nums[n - 1]; // Unique element at end

        int low = 1, high = n - 2;

        while (low <= high) {
            int mid = (low + high) / 2;

            // Check if mid is the single element
            if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1]) {
                return nums[mid];
            }

            // We are on the correct side to move right
            if ((mid % 2 == 1 && nums[mid] == nums[mid - 1]) ||
                (mid % 2 == 0 && nums[mid] == nums[mid + 1])) {
                low = mid + 1; // Eliminate left half
            } else {
                high = mid - 1; // Eliminate right half
            }
        }

        // Dummy return (problem guarantees one single element)
        return -1;
    }
};


// Time complexity = O(log n)
// Space complexity = O(1)