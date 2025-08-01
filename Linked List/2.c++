//  Add Two Numbers

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode();  // Dummy head to build result list
        ListNode *temp = dummy;            // Pointer to track current node in result
        int carry = 0;                     // Stores carry between additions
        
        // Continue until both lists are processed and no carry remains
        while ((l1 != NULL || l2 != NULL) || carry) {
            int sum = 0;

            // Add l1 node value if available
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }

            // Add l2 node value if available
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }

            // Add carry from previous addition
            sum += carry;

            // Update carry for next iteration
            carry = sum / 10;

            // Create new node with digit (sum % 10)
            ListNode *node = new ListNode(sum % 10);

            // Append to result list
            temp->next = node;
            temp = temp->next;
        }

        // Return the next of dummy node (actual result head)
        return dummy->next;
    }
};


// Time complexity: O(m + n)
// Space complexity: o(1)