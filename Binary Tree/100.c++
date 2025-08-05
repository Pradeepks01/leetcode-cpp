// Same Tree

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Base Case 1: Both nodes are null
        // -> Same (empty) tree
        if (!p && !q) {
            return true;
        }

        // Base Case 2: Both nodes are NOT null and values are equal
        if (p && q && p->val == q->val) {
            // Recursively check left and right subtrees
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }

        // Base Case 3: Either one is null or values don't match
        return false;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)