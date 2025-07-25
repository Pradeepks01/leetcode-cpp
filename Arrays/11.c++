// Container With Most Water


class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;  // left pointer at the beginning
        int r = heights.size() - 1;  // right pointer at the end
        int res = 0;  // to store the maximum area found

        while (l < r) {
            // Calculate the area between the two lines at l and r
            // Height is limited by the shorter line, width is (r - l)
            int area = min(heights[l], heights[r]) * (r - l);
            
            // Update result if this area is greater than the max found so far
            res = max(res, area);

            // Move the pointer pointing to the shorter line inward,
            // because moving the taller line won't increase area
            if (heights[l] <= heights[r]) {
                l++;
            } else {
                r--;
            }
        }

        return res; // Return the maximum area found
    }
};


// Time Complexity: O(n), Space Complexity: O(1)
// where n = number of elements in heights array
