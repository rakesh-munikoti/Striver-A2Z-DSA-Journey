/*
------------------------------------------------------------
Category   : Binary Search
Problem    : First and Last Occurrence
Source     : Striver A2Z
Difficulty : Easy

Approach:
- Use two separate Binary Searches.
- First Binary Search:
    Find the first occurrence of the target.
    When the target is found, store the index and
    continue searching toward the left.
- Second Binary Search:
    Find the last occurrence of the target.
    When the target is found, store the index and
    continue searching toward the right.
- Return both positions as [firstOccurrence, lastOccurrence].

Time Complexity : O(log n)
Space Complexity: O(1)
------------------------------------------------------------
*/
class Solution{
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        // int left = 0;
        // int right = nums.size()-1;
        // vector<int> result;
        // while(left <= right){
        //     int mid = (left + right)/2;
        //     if(nums[mid] == target){
        //         result.push_back(mid);
        //         int i = mid - 1;
        //         int j = mid + 1;
        //         if(nums[i] == target){
        //             while(nums[i] == target){
        //                 result.push_back(i);
        //                 i--;
        //             }
        //         }
        //         if(nums[j] == target){
        //             while(nums[j] == target){
        //                 result.push_back(j);
        //                 j++;
        //             }
        //         }
        //     }
        //     else if(nums[mid] < target){
        //         left = mid + 1;
        //     }
        //     else{
        //         right = mid - 1;
        //     }
        // }
        // if (result.empty()) {
        //     result.push_back(-1);
        //     result.push_back(-1);
        // }
        // return result;

        int left = 0;
        int right = nums.size()-1;
        int leftoccurence = -1;
        int rightoccurence = -1;

        vector<int> result;
        while(left <= right){
            int mid = (left + right)/2;
            if(nums[mid] == target){
                leftoccurence = mid;
                right = mid-1;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }

        left = 0;
        right = nums.size()-1;
        while(left <= right){
            int mid = (left + right)/2;
            if(nums[mid] == target){
                rightoccurence = mid;
                left = mid+1;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }

        result.push_back(leftoccurence);
        result.push_back(rightoccurence);
        return result;
    }
};
