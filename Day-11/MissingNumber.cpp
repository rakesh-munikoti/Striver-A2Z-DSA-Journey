/*
===============================================================================
Problem: Missing Number (#268)
Platform: LeetCode

Approaches Explored:
1. HashMap
2. Mathematical Formula (Optimal)

Pattern Learned:
- Mathematics
- Summation Formula

Time Complexity: O(n)
Space Complexity: O(1)

Date: Day 11 of Striver A2Z Journey
===============================================================================
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //BETTER APPROACH
        // unordered_map<int,int> mpp;
        // for(int i=0;i<nums.size();i++){
        //     mpp[nums[i]]++;
        // }
        // for(int i=0;i<=nums.size();i++){
        //     if(mpp.find(i) != mpp.end()){
        //         continue;
        //     }
        //     return i;
        // }
        // return -1;

        //OPTIMAL SOLUTION
        int total_sum = nums.size()*(nums.size() + 1) / 2;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        return total_sum-sum;
    }
};
