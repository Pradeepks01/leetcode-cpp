// Binary Tree Inorder Traversal

class Solution {
    vector<int> res;  // Stores the final inorder traversal result

public:
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);      // Start recursive inorder traversal from root
        return res;         // Return the filled result vector
    }

private:
    // Recursive function to perform inorder traversal
    void inorder(TreeNode* node) {
        if (!node) return;               // Base case: if node is null, return
        inorder(node->left);             // 1. Traverse the left subtree
        res.push_back(node->val);        // 2. Visit the current node (add value to result)
        inorder(node->right);            // 3. Traverse the right subtree
    }
};



// Time Complexity: O(n), where n is the number of nodes in the binary tree.
// Space Complexity: O(n), where n is the number of nodes in the binary tree.