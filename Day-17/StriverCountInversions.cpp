/*
------------------------------------------------------------
Category   : Arrays
Concept    : Inversion Counting
Problem    : Count Inversions
Difficulty : Medium

Approach:
- Use a brute-force approach by checking every pair (i, j).
- An inversion exists when:
      i < j && nums[i] > nums[j]
- Count every such pair.

Current Approach:
- Brute Force

Time Complexity : O(n^2)
Space Complexity: O(1)

Note:
- The optimal solution uses Merge Sort and runs in O(n log n).
- Merge Sort has not been studied yet, so the brute-force
  approach is used for now.
- This problem can be revisited later to implement the
  optimal Merge Sort-based solution.

Learning:
- Understood what an inversion is.
- Learned that an inversion represents an out-of-order pair
  where the earlier element is greater than the later element.
- Practiced counting valid pairs using nested loops.

Status: ✅ Brute Force Completed
------------------------------------------------------------
*/
class Solution {
public:
   long long int numberOfInversions(vector<int> nums) {
        long long count = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j] < nums[i]){
                    count++;
                }
            }
        }
        return count;
    }
};
