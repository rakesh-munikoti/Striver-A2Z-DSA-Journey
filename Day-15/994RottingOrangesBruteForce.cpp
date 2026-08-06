/*
------------------------------------------------------------
Category   : Extra Practice
Approach   : Brute Force (Grid Simulation)
Problem    : LeetCode 994 - Rotting Oranges
Difficulty : Medium

Approach:
- Simulate the rotting process minute by minute.
- Traverse the entire grid to find all currently rotten oranges.
- Collect all adjacent fresh oranges that will rot during the current minute.
- After completing the traversal, update all collected oranges together.
- Repeat until no new oranges can be rotten.
- Finally, check if any fresh orange remains.

Time Complexity : O((R × C) × Minutes)
Space Complexity: O(R × C)   // Stores oranges that will rot in each iteration
------------------------------------------------------------
*/
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        //BRUTE FORCE
        vector<pair<int,int>> toRot;
        int minutes = 0;
        while(true){
            toRot.clear();
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[0].size();j++){
                    if(grid[i][j] == 2){
                        if(i > 0 && grid[i-1][j] == 1){
                            toRot.push_back({i-1, j});
                        }
                        if(i + 1 < grid.size() && grid[i+1][j] == 1){
                            toRot.push_back({i+1, j});
                        }
                        if(j > 0 && grid[i][j-1] == 1){
                            toRot.push_back({i, j-1});
                        }
                        if(j + 1 < grid[0].size() && grid[i][j+1] == 1){
                            toRot.push_back({i, j+1});
                        }
                    }
                }
            }
            if(toRot.empty())
                break;
            for(auto p : toRot){
                grid[p.first][p.second] = 2;
            }
            minutes++;
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return minutes;
    }
};
