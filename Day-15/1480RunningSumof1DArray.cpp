/*
------------------------------------------------------------
Pattern    : Prefix Sum
Level      : 0 (Pattern Discovery)
Problem    : LeetCode 1480 - Running Sum of 1D Array
Difficulty : Easy

Approach:
- Create a new array to store prefix sums.
- The first element remains the same.
- Every next element is the previous prefix sum + current element.
- This constructs the Prefix Sum array in one traversal.

Time Complexity : O(n)
Space Complexity: O(n)
------------------------------------------------------------
*/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        result.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            result.push_back(result[i-1]+nums[i]);
        }
        return result;
    }
};
