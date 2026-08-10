/*
------------------------------------------------------------
Category   : Binary Search
Algorithm  : Lower Bound
Problem    : Lower Bound
Difficulty : Easy

Approach:
- Use Binary Search on the sorted array.
- Maintain an answer variable initialized to nums.size().
- If nums[mid] >= x:
    - Store mid as a possible answer.
    - Continue searching on the left side because there
      may be a smaller valid index.
- If nums[mid] < x:
    - Search on the right side.
- If no element is greater than or equal to x, return
  nums.size().

Time Complexity : O(log n)
Space Complexity: O(1)
------------------------------------------------------------
*/
class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int low = 0;
        int high = nums.size()-1;
        int ans = nums.size();
        while(low <= high){
            int mid = (high + low)/2;
            if(nums[mid] >= x){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
