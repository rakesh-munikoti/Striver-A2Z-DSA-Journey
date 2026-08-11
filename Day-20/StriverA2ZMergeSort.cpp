/*
------------------------------------------------------------
Category   : Sorting
Algorithm  : Merge Sort
Problem    : Merge Sort
Difficulty : Medium

Approach:
- Use the Divide and Conquer technique.
- Recursively divide the array into two halves.
- Continue dividing until each subarray contains one element.
- Merge the two sorted halves while maintaining sorted order.
- Copy the merged elements back into the original array.

Time Complexity : O(n log n)
Space Complexity: O(n) auxiliary space
                  O(log n) recursion stack
------------------------------------------------------------
*/
class Solution {
public:
    void merge(vector<int>& arr, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            }
            else {
                temp.push_back(arr[right]);
                right++;
            }
        }
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
    }
    void mergeSortHelper(vector<int>& arr, int low, int high) {
        if (low >= high) {
            return;
        }
        int mid = low + (high - low) / 2;
        mergeSortHelper(arr, low, mid);
        mergeSortHelper(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
    vector<int> mergeSort(vector<int>& nums) {
        mergeSortHelper(nums, 0, nums.size() - 1);
        return nums;
    }
};
