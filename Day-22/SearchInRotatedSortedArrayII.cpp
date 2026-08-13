/*
------------------------------------------------------------
Category   : Binary Search
Problem    : Search in Rotated Sorted Array-II
Source     : Striver A2Z
Difficulty : Easy

Approach:
- Use Modified Binary Search.
- At every step, check whether the middle element is the target.
- When nums[left], nums[mid], and nums[right] are equal,
  the sorted half cannot be determined reliably because of
  duplicate values.
- In that case, shrink the search space by moving both
  left and right inward.
- Otherwise, identify which half is sorted.
- Check whether the target lies within the sorted half and
  eliminate the appropriate half.

Time Complexity : O(log n) average, O(n) worst case
Space Complexity: O(1)
------------------------------------------------------------
*/
class Solution {
public:
    bool searchInARotatedSortedArrayII(vector<int> &nums, int k)  {
        int left = 0;
        int right = nums.size()-1;
        while(left <= right){
            int mid = (left+right)/2;
            if(nums[mid] == k){
                return true;
            }
            else if(nums[left] == nums[mid] && nums[mid] == nums[right]){
                left++;
                right--;
                continue;
            }
            else if(nums[left] <= nums[mid] && (nums[left] <= k && k <= nums[mid])){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return false;
    }
};
