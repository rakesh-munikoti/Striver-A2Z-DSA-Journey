/*
------------------------------------------------------------
Pattern    : Prefix Sum
Level      : 1 (Basic Application)
Problem    : LeetCode 2574 - Left and Right Sum Differences
Difficulty : Easy

Approach:
- Compute the total sum of the array.
- Maintain a running prefix sum (leftSum).
- Derive the right sum using:
      rightSum = totalSum - leftSum - nums[i]
- Compute the absolute difference between left and right sums
  for every index.
- Store each result in the answer array.

Time Complexity : O(n)
Space Complexity: O(n)
------------------------------------------------------------
*/
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int leftSum = 0;
        int rightSum = 0;
        int totalSum = 0;
        for(int i=0;i<nums.size();i++){
            totalSum += nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(i > 0){
                leftSum += nums[i-1];
            }
            rightSum = totalSum - leftSum - nums[i];
            int value = abs(leftSum - rightSum);
            ans.push_back(value);
        }
        return ans;
    }
};
