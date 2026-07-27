/*
Problem: #1351 - Count Negative Numbers in a Sorted Matrix
Platform: LeetCode
Difficulty: Easy
Approach: Reverse Traversal (Row-wise)

Time Complexity: O(m × n)
Space Complexity: O(1)
*/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;

        for(int i = 0; i < grid.size(); i++){
            for(int j = grid[0].size() - 1; j >= 0; j--){
                if(grid[i][j] >= 0){
                    break;
                }
                count++;
            }
        }

        return count;
    }
};
