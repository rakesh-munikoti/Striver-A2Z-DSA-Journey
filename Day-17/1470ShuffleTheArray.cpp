/*
------------------------------------------------------------
Category   : Arrays
Problem    : LeetCode 1470 - Shuffle the Array
Difficulty : Easy

Approach:
- The first n elements represent the X array.
- The next n elements represent the Y array.
- Traverse the first n elements and add:
      nums[i]
      nums[i + n]
  alternately to the result array.

Time Complexity : O(n)
Space Complexity: O(n)

Learning:
- Practiced basic array traversal.
- Learned how to access corresponding elements from
  two halves of an array.
- Reinforced the use of a result vector to construct
  the required output.

Status: ✅ Completed
------------------------------------------------------------
*/
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
};
