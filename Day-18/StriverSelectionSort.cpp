/*
------------------------------------------------------------
Category   : Sorting
Algorithm  : Selection Sort
Problem    : Selection Sort
Difficulty : Easy

Approach:
- Divide the array into a sorted and an unsorted portion.
- For each position i, find the minimum element in the
  unsorted portion from i to n-1.
- Store the index of the minimum element.
- Swap the minimum element with the element at index i.
- Repeat until the entire array is sorted.

Time Complexity : O(n^2)
Space Complexity: O(1)
------------------------------------------------------------
*/
class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int minimum = INT_MAX;
            int min_index = i;
            for(int j=i;j<nums.size();j++){
                if(nums[j] < minimum){
                    minimum = nums[j];
                    min_index = j;
                }
            }
            int temp = nums[i];
            nums[i] = minimum;
            nums[min_index] = temp;
        }
        return nums;
    }
};
