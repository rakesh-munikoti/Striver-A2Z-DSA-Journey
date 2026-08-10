/*
------------------------------------------------------------
Category   : Binary Search
Algorithm  : Binary Search
Problem    : Search Insert Position
Difficulty : Easy

Approach:
- Use Binary Search on the sorted array.
- If nums[mid] equals the target, return mid.
- If the target is smaller than nums[mid], search the
  left half.
- If the target is greater than nums[mid], search the
  right half.
- If the target is not found, return high + 1, which is
  the correct position where the target should be inserted.

Time Complexity : O(log n)
Space Complexity: O(1)
------------------------------------------------------------
*/
class Solution {
public:
    int searchInsert(vector<int> &nums, int target)  {
        int low = 0;
        int high = nums.size()-1;
        while(low <= high){
            int mid = (high + low)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(target < nums[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return high+1;
    }
};
