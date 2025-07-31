// Reverse Words in a String

class Solution {
public:
    string reverseWords(string s) {
    int n = s.length();
    string ans = "";

    reverse(s.begin(), s.end());  // Step 1: Reverse the entire string

    for (int i = 0; i < n; i++) {
        string word = "";

        // Step 2: Extract one word at a time (skip spaces)
        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }

        // Step 3: Reverse the current word to fix its letters
        reverse(word.begin(), word.end());

        // Step 4: Add to result if it's a valid word
        if (word.length() > 0) {
            ans += " " + word;
        }
    }

    return ans.substr(1); // Remove leading space from the final answer
}
};


// Time complexity: O(n)
// Space complexity: O(1)