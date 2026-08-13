/*
------------------------------------------------------------
Category   : Binary Search
Problem    : Find Minimum in Rotated Sorted Array
Source     : Striver A2Z
Difficulty : Easy

Approach:
- Use Modified Binary Search.
- If arr[left] <= arr[mid], the left half is sorted.
  Therefore, arr[left] is a candidate for the minimum.
- Otherwise, the minimum lies in the left half, including mid.
  Therefore, arr[mid] is a candidate.
- Continue reducing the search space until the minimum is found.

Time Complexity : O(log n)
Space Complexity: O(1)
------------------------------------------------------------
*/
class Solution {
public:
    int findMin(vector<int> &arr)  {
        int minimum = INT_MAX;
        int left = 0;
        int right = arr.size()-1;
        while(left <= right){
            int mid = (left + right)/2;
            if(arr[left] <= arr[mid]){
                minimum = min(minimum,arr[left]);
                left = mid + 1;
            }
            else{
                minimum = min(minimum,arr[mid]);
                right = mid - 1;
            }
        }
        return minimum;
    }
};
