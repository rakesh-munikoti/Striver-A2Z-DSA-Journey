/*
LeetCode 287 - Find the Duplicate Number

Learned Pattern:
- Floyd's Cycle Detection (Tortoise and Hare)

Approach Evolution:
1. Brute Force (Nested Loops)
2. Counting Frequency (Brute Force)
3. Floyd's Cycle Detection (Optimal)

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //BRUTE FORCE
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i] == nums[j]){
        //             return nums[i];
        //         }
        //     }
        // }
        // return -1;

        //ANOTHER BRUTE FORCE APPROACH
        // int count = 0;
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=0;j<nums.size();j++){
        //         if(i == nums[j]){
        //             count++;
        //         }
        //     }
        //     if(count > 1){
        //         return i;
        //     }
        //     else{
        //         count = 0;
        //     }
        // }
        // return -1;

        //OPTIMAL SOLUTION
        int slow1 = nums[0];
        int fast = nums[0];
        do{
            slow1 = nums[slow1];
            fast = nums[nums[fast]];
        }while(slow1 != fast);
        int slow2 = nums[0];
        while(slow1 != slow2){
            slow1 = nums[slow1];
            slow2 = nums[slow2];
        }
        return slow1;
    }
};
