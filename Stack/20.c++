// Valid Parentheses

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;  // Used to store opening brackets
        std::unordered_map<char, char> closeToOpen = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        // Traverse each character in the string
        for (char c : s) {
            if (closeToOpen.count(c)) {  // If it's a closing bracket
                if (!stack.empty() && stack.top() == closeToOpen[c]) {
                    stack.pop();  // Matching opening bracket → pop it
                } else {
                    return false; // Invalid match or empty stack
                }
            } else {
                stack.push(c);  // It's an opening bracket → push to stack
            }
        }

        return stack.empty();  // If stack is empty, all brackets matched
    }
};


// Time complexity: O(n)
// Space complexity: O(n)