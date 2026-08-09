/*
------------------------------------------------------------
Category   : Sorting
Algorithm  : Bubble Sort
Problem    : Bubble Sort
Difficulty : Easy

Approach:
- Compare adjacent elements.
- If the left element is greater than the right element,
  swap them.
- After every complete pass, the largest unsorted element
  moves to its correct position at the end of the array.
- Repeat the process until the entire array is sorted.

Time Complexity : O(n^2)
Space Complexity: O(1)
------------------------------------------------------------
*/
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size()-1;j++){
                if(nums[j] > nums[j+1]){
                    int temp = nums[j+1];
                    nums[j+1] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        return nums;
    }
};
