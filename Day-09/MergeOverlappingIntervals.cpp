/*
===============================================================================
Problem: Merge Overlapping Intervals
Platform: Striver A2Z DSA Sheet (Hard Arrays)

Approaches Explored:
1. Bubble Sort + Interval Merging
2. Optimal: Sort + Single Pass Interval Merging

Pattern Learned:
- Interval Merging
- Sorting + Greedy Traversal

Time Complexity: O(n log n)
Space Complexity: O(n)

Date: Day 09 of Striver A2Z Journey
===============================================================================
*/

class Solution {
public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> result;
        int prevstart = arr[0][0];
        int prevend = arr[0][1];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i][0] <= prevend) {
                if (arr[i][1] > prevend) {
                    prevend = arr[i][1];
                }
            }
            else {
                vector<int> temp;
                temp.push_back(prevstart);
                temp.push_back(prevend);
                result.push_back(temp);
                prevstart = arr[i][0];
                prevend = arr[i][1];
            }
        }
        vector<int> temp;
        temp.push_back(prevstart);
        temp.push_back(prevend);
        result.push_back(temp);
        return result;
    }
};
