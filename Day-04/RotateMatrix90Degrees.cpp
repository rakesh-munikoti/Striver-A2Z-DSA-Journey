/*
Problem: Rotate Matrix by 90 Degrees
Platform: Striver A2Z
Difficulty: Medium
Approach: Matrix Transpose + Reverse Each Row

Time Complexity: O(n²)
Space Complexity: O(1)
*/

class Solution {
public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        // Transpose the matrix
        for(int i = 0; i < matrix.size(); i++){
            for(int j = i + 1; j < matrix[0].size(); j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        // Reverse each row
        for(int i = 0; i < matrix.size(); i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
