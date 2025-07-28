// Longest Repeating Character Replacement

class Solution {
public:
    int characterReplacement(std::string s, int k) {
        unordered_map<char, int> count;  // Frequency count of characters in the current window
        int res = 0;  // Stores the maximum length of a valid window

        int l = 0, maxf = 0;  // l: left pointer, maxf: max frequency of any char in the window

        // r: right pointer
        for (int r = 0; r < s.size(); r++) {
            count[s[r]]++;                      // Count the current character
            maxf = max(maxf, count[s[r]]);      // Update the max frequency in current window

            // If the remaining characters (window size - maxf) exceed k, shrink window from left
            while ((r - l + 1) - maxf > k) {
                count[s[l]]--;  // Remove the leftmost character from window
                l++;            // Move the left pointer forward
            }

            // Update the result with the current valid window size
            res = max(res, r - l + 1);
        }

        return res;
    }
};


// Time Complexity: O(n)
// Space Complexity: O(k)