/*
------------------------------------------------------------
Category   : Binary Search
Algorithm  : Binary Search
Problem    : Floor and Ceil in a Sorted Array
Difficulty : Easy

Approach:
- Perform one Binary Search to find the floor:
    Largest value <= x
- Perform a second Binary Search to find the ceil:
    Smallest value >= x
- For the floor search, whenever nums[mid] <= x,
  store it as a candidate and search toward the right.
- For the ceil search, whenever nums[mid] >= x,
  store it as a candidate and search toward the left.
- Use INT_MIN and INT_MAX as sentinel values to determine
  whether a valid floor or ceil was found.
- Convert an unavailable floor or ceil to -1.

Time Complexity : O(log n)
Space Complexity: O(1)
------------------------------------------------------------
*/
#include <climits>
class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        vector<int> ans;
        int floor = INT_MIN;
        int ceil = INT_MAX;
        int low = 0;
        int high = nums.size()-1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] <= x){
                floor = max(floor,nums[mid]);
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        low = 0;
        high = nums.size()-1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] >= x){
                ceil = min(ceil,nums[mid]);
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        if(floor == INT_MIN){
            floor = -1;
        }
        if(ceil == INT_MAX){
            ceil = -1;
        }
        ans.push_back(floor);
        ans.push_back(ceil);
        return ans;
    }
};
