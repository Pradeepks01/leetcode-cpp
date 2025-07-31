// Middle of the Linked List


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;  // slow pointer starts at head
        ListNode* fast = head;  // fast pointer also starts at head

        // Move fast by 2 steps and slow by 1 step
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // When fast reaches end, slow is at the middle
        return slow;
    }
};



// Time Complexity: O(n)
// Space Complexity: O(1)