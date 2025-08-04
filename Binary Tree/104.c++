// Maximum Depth of Binary Tree


class Solution {
public:
    // Function to find the maximum depth of a binary tree
    int maxDepth(TreeNode* root) {
        // Base case: If the root is NULL, return 0
        if (root == NULL) {
            return 0;
        }

        // Recursively find depth of left subtree
        int lh = maxDepth(root->left);

        // Recursively find depth of right subtree
        int rh = maxDepth(root->right);

        // Return 1 + maximum of left and right depth
        return 1 + max(lh, rh);
    }
};


// Time Complexity: O(n)
// Space Complexity: O(n) in best case and O(log n) in worst case