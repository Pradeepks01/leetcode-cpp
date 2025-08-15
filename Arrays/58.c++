// Length of Last Word

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int i = n - 1, length = 0;
        // Step 1: Skip trailing spaces
        while (s[i] == ' ') i--;
        // Step 2: Count characters of the last word
        while (i >= 0 && s[i] != ' ') {
            i--;
            length++;
        }
        return length;
    }
};