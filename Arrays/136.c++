// Single Number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        int N = nums.size();
        for (int i=0; i<N; i++) {
            result = result ^ nums[i];
        }
        return result;
    }
};


// time complexity: O(n)
// space complexity: O(1)