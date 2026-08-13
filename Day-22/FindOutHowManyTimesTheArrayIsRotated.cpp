/*
------------------------------------------------------------
Category   : Binary Search
Problem    : Find Out How Many Times the Array Is Rotated
Source     : Striver A2Z
Difficulty : Easy

Approach:
- Use Modified Binary Search to find the minimum element.
- The index of the minimum element represents the number
  of right rotations performed on the sorted array.
- Keep track of both the minimum value and its index.
- If the left half is sorted, consider nums[left] as a
  candidate for the minimum.
- Otherwise, consider nums[mid] as a candidate and search
  the left half.

Time Complexity : O(log n)
Space Complexity: O(1)
------------------------------------------------------------
*/
class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int minimum = INT_MAX;
        int minimum_index = 0;
        int left = 0;
        int right = nums.size()-1;
        while(left <= right){
            int mid = (left+right)/2;
            if(nums[left] <= nums[mid]){
                if(nums[left] < minimum){
                    minimum = nums[left];
                    minimum_index = left;
                }
                left = mid + 1;
            }
            else{
                if(nums[mid] < minimum){
                    minimum = nums[mid];
                    minimum_index = mid;
                }
                right = mid - 1;
            }
        }
        return minimum_index;
    }
};
