/*
------------------------------------------------------------
Pattern    : Prefix Sum
Level      : 0 (Pattern Discovery)
Problem    : LeetCode 1991 - Find the Middle Index in Array
Difficulty : Easy

Approach:
- First, compute the total sum of the array.
- Traverse the array while maintaining a running prefix sum (leftSum).
- Calculate the right sum using:
      rightSum = totalSum - leftSum - nums[i]
- If leftSum equals rightSum, the current index is the middle index.
- Update leftSum after checking the current index.

Time Complexity : O(n)
Space Complexity: O(1)
------------------------------------------------------------
*/
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;
        int rightSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            totalSum += nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            rightSum = totalSum - leftSum - nums[i];

            if (leftSum == rightSum) {
                return i;
            }

            leftSum += nums[i];
        }

        return -1;
    }
};
