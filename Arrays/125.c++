// Valid Palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.length() - 1; // Pointers at start and end

        while (left < right) {
            // Skip non-alphanumeric characters from the left
            if (!isalnum(s[left])) 
                left++;

            // Skip non-alphanumeric characters from the right
            else if (!isalnum(s[right])) 
                right--;

            // Compare characters (case-insensitive)
            else if (tolower(s[left]) != tolower(s[right])) 
                return false; // Mismatch found

            else {
                // Move both pointers inward if characters matched
                left++; 
                right--;
            }
        }

        return true; // All characters matched — it's a palindrome
    }
};


// time complexity: O(n)
// space complexity: O(1)