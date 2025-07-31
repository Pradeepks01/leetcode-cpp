// Reverse Linked List


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr; // Initially, prev is null (end of reversed list)
        ListNode* curr = head;    // Start from the head of the list

        while (curr) { // Loop until current node becomes null (end of list)
            ListNode* temp = curr->next; // Store the next node
            curr->next = prev;           // Reverse the pointer
            prev = curr;                 // Move prev forward
            curr = temp;                 // Move curr forward
        }

        return prev; // At the end, prev points to new head
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)