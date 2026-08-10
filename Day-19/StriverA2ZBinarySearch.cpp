/*
------------------------------------------------------------
Category   : Binary Search
Algorithm  : Binary Search
Problem    : Search X in a Sorted Array
Difficulty : Easy

Approach:
- Use two pointers, low and high, to represent the current
  search range.
- Calculate the middle index.
- If nums[mid] equals the target, return mid.
- If the target is greater than nums[mid], search the right
  half by moving low to mid + 1.
- If the target is smaller than nums[mid], search the left
  half by moving high to mid - 1.
- Continue until the target is found or the search range
  becomes empty.

Time Complexity : O(log n)
Space Complexity: O(1)
------------------------------------------------------------
*/
class Solution{
public:
    int search(vector<int> &nums, int target){
        int low = 0;
        int high = nums.size()-1;
        while(low <= high){
            int mid = (high + low)/2;
            if(target == nums[mid]){
                return mid;
            }
            else if(target > nums[mid]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return -1;
    }
};
