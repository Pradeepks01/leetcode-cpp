// Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;  // where next non-zero element should go

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != 0) {
                swap(nums[left], nums[right]);
                left++;  // move left ahead after placing non-zero
            }
        }
    }
};


// Time Complexity: O(n)
// Space Complexity: O(1)