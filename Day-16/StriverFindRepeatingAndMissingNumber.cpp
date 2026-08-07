/*
------------------------------------------------------------
Category   : Arrays
Concept    : In-Place Marking + Mathematics
Problem    : Find the Repeating and Missing Number
Difficulty : Medium

Approach:
- Traverse the array and use each value as an index.
- Mark the corresponding index as visited by making its value negative.
- If an index is already negative, the current value is the duplicate.
- Compute the expected sum of numbers from 1 to n.
- Calculate the missing number using:
      Missing = ExpectedSum - ActualSum + Duplicate

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned how to use the input array itself as a visited map.
- Understood the concept of "Home Index":
      Value x → Index (x - 1)
- Learned the in-place negative marking technique without using
  extra memory.
- Combined mathematical observations with array traversal to
  derive the missing number efficiently.
- Realized how problem constraints (values from 1 to n) enable
  in-place marking techniques.

Status: ✅ Completed
------------------------------------------------------------
*/
class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        vector<int> ans;
        int duplicate;
        int actualsum = 0;
        for(int i=0;i<nums.size();i++){
            actualsum += nums[i];
        }
        for(int i=0;i<nums.size();i++){
            int value = abs(nums[i]);
            if(nums[value-1] < 0){
                duplicate = value;
                break;
            }
            nums[value-1] = -nums[value-1];
        }
        int totalsum = (nums.size()*(nums.size()+1))/2;
        int missing = totalsum - actualsum + duplicate;
        ans.push_back(duplicate);
        ans.push_back(missing);
        return ans;
    }
};
