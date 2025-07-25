// Trapping Rain Water

class Solution {
public:
    int trap(vector<int>& height) {
        // If the height array is empty, no water can be trapped
        if (height.empty()) return 0;

        int l = 0, r = height.size() - 1; // Two pointers from both ends
        int leftMax = height[l];         // Max height on the left side
        int rightMax = height[r];        // Max height on the right side
        int res = 0;                      // Result to store trapped water

        // Loop until pointers meet
        while (l < r) {
            // Always move the pointer with the smaller max height
            if (leftMax < rightMax) {
                l++; // Move left pointer
                leftMax = max(leftMax, height[l]);   // Update leftMax
                res += leftMax - height[l];          // Water trapped at this index
            } else {
                r--; // Move right pointer
                rightMax = max(rightMax, height[r]); // Update rightMax
                res += rightMax - height[r];         // Water trapped at this index
            }
        }

        return res; // Total water trapped
    }
};


// Time Complexity: O(n), Space Complexity: O(1)
// where n = number of elements in height array