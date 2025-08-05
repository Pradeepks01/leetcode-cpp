// Balanced Binary Tree

class Solution {
public:
    // Function to check if a binary tree is balanced
    bool isBalanced(TreeNode* root) {
        // Call the helper function. If it returns -1, the tree is unbalanced.
        return dfsHeight(root) != -1;
    }

    // Helper function to compute the height of the tree and check balance
    int dfsHeight(TreeNode* root) {
        // Base case: if the node is null, height is 0
        if (root == NULL) return 0;

        // Recursively get the height of the left subtree
        int leftHeight = dfsHeight(root->left);
        // If left subtree is unbalanced, propagate -1 up
        if (leftHeight == -1) return -1;

        // Recursively get the height of the right subtree
        int rightHeight = dfsHeight(root->right);
        // If right subtree is unbalanced, propagate -1 up
        if (rightHeight == -1) return -1;

        // If the difference in heights > 1, it's unbalanced
        if (abs(leftHeight - rightHeight) > 1) return -1;

        // Otherwise, return height of current subtree
        return max(leftHeight, rightHeight) + 1;
    }
};


// Time Complexity: O(N)
// Space Complexity: O(N)