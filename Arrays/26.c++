// Remove Duplicates from Sorted Array   

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        for (int j = 1; j < n; j++) {
            if (nums[k] != nums[j]) {
                k++;
                nums[k] = nums[j];
            }
        }
        return k + 1;
    }
};
               
        

// time complexity: O(n)
// space complexity: O(1)