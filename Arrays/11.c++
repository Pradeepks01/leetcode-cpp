// Time Complexity: O(n) — we scan the array only once using two pointers
// Space Complexity: O(1) — only a few variables are used, no extra space required

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;                      // Pointer starting from the beginning
        int right = height.size() - 1;     // Pointer starting from the end
        int maxWater = 0;                  // Variable to store the maximum water area found

        // Loop until the two pointers meet
        while (left < right) {
            int width = right - left;                                // Width between the two lines
            int h = min(height[left], height[right]);                // Height is the shorter of the two lines
            int water = width * h;                                   // Area formed by the two lines
            maxWater = max(maxWater, water);                         // Update maxWater if current area is greater

            // Move the pointer pointing to the shorter line inward,
            // because moving the taller one cannot increase the area
            if (height[left] < height[right]) {
                left++;     // Move left pointer to the right
            } else {
                right--;    // Move right pointer to the left
            }
        }

        return maxWater;  // Return the maximum area found
    }
};
