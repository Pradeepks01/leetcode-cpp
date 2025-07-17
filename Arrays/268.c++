// Missing Number
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0, xor2 = 0;
        int N = nums.size();  // Total numbers from 0 to N

        // XOR of array elements and numbers from 1 to N-1
        for (int i = 0; i < N; i++) {
            xor2 = xor2 ^ nums[i];    // XOR of array elements
            xor1 = xor1 ^ (i + 1);    // XOR of numbers from 1 to N
        }

        return (xor1 ^ xor2);  // The missing number
    }
};


// Time complexity: O(n)
// Space complexity: O(1)