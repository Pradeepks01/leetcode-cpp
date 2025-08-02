// Combination Sum 

class Solution {
public:
    vector<vector<int>> res; // Stores all valid combinations

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> cur; // Current combination being formed
        backtrack(nums, target, cur, 0); // Start from index 0
        return res;
    }

    void backtrack(vector<int>& nums, int target, vector<int>& cur, int i) {
        // ✅ Base Case 1: If target is exactly 0, we found a valid combination
        if (target == 0) {
            res.push_back(cur); // Add current path to result
            return;
        }

        // ❌ Base Case 2: If target goes negative or we've used all numbers, backtrack
        if (target < 0 || i >= nums.size()) {
            return;
        }

        // ✅ Choice 1: Pick nums[i] (we can reuse it again, so pass same index)
        cur.push_back(nums[i]);
        backtrack(nums, target - nums[i], cur, i); // Keep i for unlimited usage
        cur.pop_back(); // Backtrack

        // ✅ Choice 2: Skip nums[i] and move to next index
        backtrack(nums, target, cur, i + 1);
    }
};


// Time Complexity: O(2 t/m)
// Space Complexity: O(t/m)

