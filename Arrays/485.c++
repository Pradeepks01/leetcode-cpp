// Max Consecutive Ones
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                count = 0;
            }
            maxCount = max(maxCount,count);
        }
        return maxCount;
    }
};

// time complexity = O(n)
// space complexity = O(1)