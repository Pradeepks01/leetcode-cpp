// Two sum II - Input array is sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1; // Two pointers: left and right

        while (l < r) {
            int curSum = numbers[l] + numbers[r]; // Sum of elements at l and r

            if (curSum > target) {
                r--; // Sum too big → decrease right pointer to reduce sum
            } else if (curSum < target) {
                l++; // Sum too small → increase left pointer to increase sum
            } else {
                return { l + 1, r + 1 }; // Found the pair → return 1-based indices
            }
        }

        return {}; // No valid pair found (though problem guarantees one exists)
    }
};


// Time complexity: O(n)
// Space complexity: O(1)