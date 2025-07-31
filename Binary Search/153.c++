// Find Minimum in Rotated Sorted Array


class Solution {
public:
    int findMin(vector<int>& nums) {
    int l = 0, r = nums.size() - 1; // Start with full range of the rotated array

    while (l < r) {
        int m = l + (r - l) / 2; // Find mid-point to avoid overflow

        if (nums[m] < nums[r]) {
            r = m; // Minimum lies in the left half (including mid)
        } else {
            l = m + 1; // Minimum lies in the right half (excluding mid)
        }
    }

    return nums[l]; // When loop ends, l == r → position of the smallest element
}
};


// Time Complexity: O(log n)
// Space Complexity: O(1)