/*
===============================================================================
Problem: Partition Array Such That Maximum Difference Is K (#2294)
Platform: LeetCode

Approach:
- Sort the array.
- Start a partition with the first element.
- Expand the current partition while:
      current_element - first_element_of_partition <= k
- If the condition fails, start a new partition.
===============================================================================
*/
class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        //OPTIMAL APPROACH 
        sort(nums.begin(),nums.end());
        int count = 1;
        int i = 0;
        int j = i+1;
        while(i < nums.size()-1 && j < nums.size()){
            if(nums[j]-nums[i] <= k){
                j++;
               continue;
            }
            count++;
            i = j;
            j = i+1;
        }
        return count;
    }
};
