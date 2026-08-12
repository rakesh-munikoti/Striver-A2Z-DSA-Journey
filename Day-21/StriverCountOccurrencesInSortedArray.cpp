/*
------------------------------------------------------------
Category   : Binary Search
Problem    : Count Occurrences in a Sorted Array
Source     : Striver A2Z
Difficulty : Easy

Approach:
- Use two Binary Searches to find the boundaries of the target.
- First Binary Search:
    Find the first occurrence of the target.
- Second Binary Search:
    Find the last occurrence of the target.
- If the target does not exist, return 0.
- Otherwise, calculate the number of occurrences using:
      lastOccurrence - firstOccurrence + 1

Time Complexity : O(log n)
Space Complexity: O(1)
------------------------------------------------------------
*/
class Solution {
public:
    int countOccurrences(vector<int>& arr, int target) {
        // Your code goes here
        int left  = 0;
        int right = arr.size()-1;
        int leftmost = -1;
        int rightmost = -1;
        while(left <= right){
            int mid = (left + right)/2;
            if(arr[mid] == target){
                leftmost = mid;
                right = mid - 1;
            }
            else if(arr[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }

        left = 0;
        right = arr.size()-1;
        while(left <= right){
            int mid = (left + right)/2;
            if(arr[mid] == target){
                rightmost = mid;
                left = mid + 1;
            }
            else if(arr[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }

        if(leftmost == -1){
            return 0;
        }
        return (rightmost - leftmost) + 1;
    }
};
