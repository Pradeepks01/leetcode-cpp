// Linked List Cycle

class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* fast = head;   // Fast pointer moves two steps at a time
        ListNode* slow = head;   // Slow pointer moves one step at a time

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;  // Move fast pointer ahead by two
            slow = slow->next;        // Move slow pointer ahead by one

            if (fast == slow) {       // If they meet, a cycle exists
                return true;
            }
        }

        return false;  // If fast reaches null, no cycle exists
    }
};


// Time Complexity: O(n)
// Space Complexity: O(1)