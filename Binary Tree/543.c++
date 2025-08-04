// Diameter of Binary Tree

class Solution {
public:
    // Function to return the diameter of the binary tree
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0; // Store the maximum diameter found
        height(root, diameter); // Call helper to compute height and update diameter
        return diameter;
    }

private:
    // Helper function to compute height and update diameter
    int height(TreeNode* node, int& diameter) {
        if (!node) return 0; // If node is null, height is 0

        int lh = height(node->left, diameter);  // Height of left subtree
        int rh = height(node->right, diameter); // Height of right subtree

        diameter = max(diameter, lh + rh); // Update diameter if needed

        return 1 + max(lh, rh); // Return height of this node
    }
};


// Time Complexity: O(n), where n is the number of nodes in the binary tree.
// Space Complexity: O(n), where n is the number of nodes in the binary tree.