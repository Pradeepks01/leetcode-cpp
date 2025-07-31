// Longest Common Prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Traverse each character position of the first string
        for (int i = 0; i < strs[0].length(); i++) {

            // For every string in the list
            for (const string& s : strs) {

                // If current string is shorter than i, or characters don't match
                if (i == s.length() || s[i] != strs[0][i]) {
                    // Return the common prefix up to index i
                    return s.substr(0, i);
                }
            }
        }

        // If loop completes, the entire first string is the common prefix
        return strs[0];
    }
};


// Time Complexity: O(n)
// Space Complexity: O(1)