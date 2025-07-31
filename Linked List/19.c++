// Remove Nth Node From End of List

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);  // Step 1: dummy node
        ListNode* left = dummy;
        ListNode* right = head;

        // Step 2: move 'right' n steps ahead
        while (n > 0) {
            right = right->next;
            n--;
        }

        // Step 3: move both pointers until 'right' reaches the end
        while (right != nullptr) {
            left = left->next;
            right = right->next;
        }

        // Step 4: remove the target node
        left->next = left->next->next;

        return dummy->next;  // Return new head (could be different if head was removed)
    }
};


// Time complexity: O(n)
// Space complexity: O(1)

