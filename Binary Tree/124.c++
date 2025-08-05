// Binary Tree Maximum Path Sum

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int res = root->val; // Initialize result with root value
        dfs(root, res);
        return res;
    }

private:
    int dfs(TreeNode* root, int& res) {
        if (!root) return 0;

        // Compute left and right max path sums (ignore negatives)
        int leftMax = max(dfs(root->left, res), 0);
        int rightMax = max(dfs(root->right, res), 0);

        // Update the result if the current path is better
        res = max(res, root->val + leftMax + rightMax);

        // Return the max path sum that can be extended to parent
        return root->val + max(leftMax, rightMax);
    }
};


// Time complexity: O(n)
// Space complexity: O(n)