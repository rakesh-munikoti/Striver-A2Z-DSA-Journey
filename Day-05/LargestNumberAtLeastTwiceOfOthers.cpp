/*
Problem: #747 - Largest Number At Least Twice of Others
Platform: LeetCode
Difficulty: Easy
Approach: Find Maximum + Verify Condition

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxElement = INT_MIN;
        int maxIndex;

        // Find the maximum element and its index
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxElement){
                maxElement = nums[i];
                maxIndex = i;
            }
        }

        // Verify the dominant condition
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != maxElement && maxElement < 2 * nums[i]){
                return -1;
            }
        }

        return maxIndex;
    }
};
