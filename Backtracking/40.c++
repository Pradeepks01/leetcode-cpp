// Combination Sum II

class Solution {
public:
    vector<vector<int>> res;

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        res.clear();  // Clear result for safety
        sort(candidates.begin(), candidates.end());  // Sort to handle duplicates
        vector<int> cur;  // Temp list to build current combination
        dfs(candidates, target, 0, cur, 0);  // Start DFS from index 0
        return res;
    }

private:
    void dfs(vector<int>& candidates, int target, int i, vector<int>& cur, int total) {
        if (total == target) {
            res.push_back(cur);  // Valid combination found
            return;
        }

        if (total > target || i == candidates.size()) {
            return;  // Exceeded target or no more candidates
        }

        // Choose candidates[i]
        cur.push_back(candidates[i]);
        dfs(candidates, target, i + 1, cur, total + candidates[i]);  // move to next index (no reuse)
        cur.pop_back();  // backtrack

        // Skip duplicates
        while (i + 1 < candidates.size() && candidates[i] == candidates[i + 1]) {
            i++;  // skip next if same as current
        }

        // Skip the current number altogether (don't include it)
        dfs(candidates, target, i + 1, cur, total);
    }
};

// Time Complexity: O(n * 2^n)
// Space Complexity: O(n)