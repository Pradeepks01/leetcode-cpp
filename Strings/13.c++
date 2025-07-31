// Roman to Integer

class Solution {
public:
    int romanToInt(string s) {
        int res = 0;

        // Mapping Roman numerals to their integer values
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        // Loop through the string up to the second last character
        for (int i = 0; i < s.size() - 1; i++) {
            // If current value is less than next, subtract it (e.g., IV = 5 - 1 = 4)
            if (roman[s[i]] < roman[s[i + 1]]) {
                res -= roman[s[i]];
            } else {
                // Else, add normally
                res += roman[s[i]];
            }
        }

        // Always add the last Roman character value
        return res + roman[s.back()];
    }
};


// Time Complexity: O(n)
// Space Complexity: O(1)