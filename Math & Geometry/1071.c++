// Greatest Common Divisor of Strings

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // Step 1: Check if they share the same pattern
        if (str1 + str2 != str2 + str1) return "";

        // Step 2: Find GCD of lengths
        int gcd_len = gcd(str1.size(), str2.size());

        // Step 3: Return substring
        return str1.substr(0, gcd_len);
    }
};
