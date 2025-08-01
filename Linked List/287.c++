// Find the Duplicate Number


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Phase 1: Detect cycle (Floyd's cycle detection)
        int slow = 0, fast = 0;
        while (true) {
            slow = nums[slow];             // Move by 1 step
            fast = nums[nums[fast]];       // Move by 2 steps
            if (slow == fast) {
                break;                     // Cycle detected
            }
        }

        // Phase 2: Find entry point of the cycle
        int slow2 = 0;
        while (true) {
            slow = nums[slow];            // Move by 1 step
            slow2 = nums[slow2];          // Move by 1 step
            if (slow == slow2) {
                return slow;              // Found the duplicate
            }
        }
    }
};

// Time complexity: O(n)
// Space complexity: O(1)