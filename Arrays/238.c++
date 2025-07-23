// Product of Array Except Self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(), 1);  // Step 1: Create result array with 1s

        int left = 1;
        for (int i = 0; i < nums.size(); i++) {
            output[i] *= left;   // Multiply by product of all elements to the left
            left *= nums[i];     // Update left to include current number
        }

        int right = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            output[i] *= right;  // Multiply by product of all elements to the right
            right *= nums[i];    // Update right to include current number
        }

        return output;        
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)