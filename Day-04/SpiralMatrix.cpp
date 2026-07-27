/*
Problem: Spiral Matrix
Platform: Striver A2Z
Difficulty: Medium
Approach: Boundary Traversal (Top, Bottom, Left, Right)

Time Complexity: O(m × n)
Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        vector<int> result;
        int i;

        while(top <= bottom && left <= right){

            // Traverse Left to Right
            i = left;
            while(i <= right){
                result.push_back(matrix[top][i]);
                i++;
            }
            top++;

            // Traverse Top to Bottom
            i = top;
            while(i <= bottom){
                result.push_back(matrix[i][right]);
                i++;
            }
            right--;

            // Traverse Right to Left
            if(top <= bottom){
                i = right;
                while(i >= left){
                    result.push_back(matrix[bottom][i]);
                    i--;
                }
            }
            bottom--;

            // Traverse Bottom to Top
            if(left <= right){
                i = bottom;
                while(i >= top){
                    result.push_back(matrix[i][left]);
                    i--;
                }
            }
            left++;
        }

        return result;
    }
};
