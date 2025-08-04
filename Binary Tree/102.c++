// Binary Tree Level Order Traversal

class Solution {
public:
    // Perform level-order traversal (BFS) and return nodes level by level
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans; // Result vector to store all levels

        if (root == nullptr) {
            // If tree is empty, return an empty result
            return ans;
        }

        queue<TreeNode*> q; // Queue for BFS
        q.push(root);       // Start with the root node

        while (!q.empty()) {
            int size = q.size();      // Number of nodes at the current level
            vector<int> level;        // Vector to store values of the current level

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front(); q.pop(); // Get the front node
                level.push_back(node->val);          // Add node's value to current level

                // Add child nodes to the queue if they exist
                if (node->left)  q.push(node->left);
                if (node->right) q.push(node->right);
            }

            ans.push_back(level); // Add current level to result
        }

        return ans; // Return the full level order traversal
    }
};

// Time Complexity: O(n), where n is the number of nodes in the binary tree.
// Space Complexity: O(n), where n is the number of nodes in the binary tree.