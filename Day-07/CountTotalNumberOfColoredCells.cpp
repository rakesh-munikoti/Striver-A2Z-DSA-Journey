/*
Problem: #2579 - Count Total Number of Colored Cells
Platform: LeetCode
Difficulty: Medium
Approach: Mathematical Pattern Observation

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    long long coloredCells(int n) {
        if(n == 0){
            return 0;
        }
        long long result = 1; 
        for(int i=0;i<n;i++){
            result = result+(i*4);
        }
        return result;
    }
};
