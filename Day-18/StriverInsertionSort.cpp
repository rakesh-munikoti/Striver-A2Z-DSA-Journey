/*
------------------------------------------------------------
Category   : Sorting
Algorithm  : Insertion Sort
Problem    : Insertion Sort
Difficulty : Easy

Approach:
- Consider the left portion of the array as sorted.
- Start from the current element and compare it with the
  elements before it.
- If the previous element is greater, swap the two elements.
- Continue moving the current element toward the left until
  it reaches its correct position.
- Repeat for every element in the array.

Time Complexity :
- Best Case    : O(n)
- Average Case : O(n^2)
- Worst Case   : O(n^2)
------------------------------------------------------------
*/
class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int j = i;
            while(j > 0 && nums[j-1] > nums[j]){
                int temp = nums[j];
                nums[j] = nums[j-1];
                nums[j-1] = temp;
                j--;
            }
        }
        return nums;
    }
};
