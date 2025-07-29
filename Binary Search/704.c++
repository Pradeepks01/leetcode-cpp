// Binary Search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;  // l = left index, r = right index of search range

        while (l <= r) {  // Continue until search range is valid
            int m = l + ((r - l) / 2);  // Compute middle index (safe from overflow)

            if (nums[m] > target) {
                r = m - 1;  // Target is in the left half → reduce right bound
            } else if (nums[m] < target) {
                l = m + 1;  // Target is in the right half → increase left bound
            } else {
                return m;   // nums[m] == target → found, return index
            }
        }
        return -1;  // Target not found in array
    }
};


// Time Complexity: O(log n), Space Complexity: O(1)
// where n = number of elements in nums array