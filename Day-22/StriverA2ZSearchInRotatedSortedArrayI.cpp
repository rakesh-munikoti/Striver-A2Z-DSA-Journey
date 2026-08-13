/*
------------------------------------------------------------
Category   : Binary Search
Problem    : Search in Rotated Sorted Array-I
Source     : Striver A2Z
Difficulty : Easy

Approach:
- Use Modified Binary Search.
- At every step, determine which half of the array is sorted.
- Check whether the target lies within the sorted half.
- If it does, search that half.
- Otherwise, search the other half.
- Continue until the target is found or the search space
  becomes empty.

Time Complexity : O(log n)
Space Complexity: O(1)
------------------------------------------------------------
*/
class Solution {
public:
    int search(vector<int> &nums, int k) {
        int left = 0;
        int right = nums.size()-1;
        while(left <= right){
            int mid = (left + right)/2;
            if(nums[mid] == k){
                return mid;
            }
            else if(nums[left] <= nums[mid] && (nums[left] <= k && k <= nums[mid])){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return -1;
    }
};
