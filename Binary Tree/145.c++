// Binary  Tree Postorder Traversal

class Solution {
    vector<int> res;

public:
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return res;
    }

private:
    void postorder(TreeNode* node) {
        if (!node) {
            return;
        }
        postorder(node->left);
        postorder(node->right);
        res.push_back(node->val);
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)