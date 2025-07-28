// Sort Colors

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0;                  // Current index
        int l = 0;                  // Left pointer for 0s
        int r = nums.size() - 1;   // Right pointer for 2s

        while (i <= r) {
            if (nums[i] == 0) {
                swap(nums[l], nums[i]);  // Move 0 to the front
                l++;
            } else if (nums[i] == 2) {
                swap(nums[i], nums[r]);  // Move 2 to the end
                r--;
                i--;  // Recheck the swapped-in value
            }
            i++;  // Always move forward
        }
    }
};


// time complexity: O(n)
// space complexity: O(n)