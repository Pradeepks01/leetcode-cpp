// Longest Substring Without Repeating Characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet; // To store unique characters in the current window
        int l = 0;                   // Left pointer of the window
        int res = 0;                 // To store the length of the longest substring

        for (int r = 0; r < s.size(); r++) { // Right pointer of the window
            // If s[r] is already in the set, remove characters from the left until it's not
            while (charSet.find(s[r]) != charSet.end()) {
                charSet.erase(s[l]); // Remove the leftmost character
                l++;                 // Shrink the window from the left
            }
            charSet.insert(s[r]);                // Add the current character to the set
            res = max(res, r - l + 1);           // Update the result with window size
        }
        return res;
    }
};


// Time complexity: O(n)
// Space complexity: O(n)