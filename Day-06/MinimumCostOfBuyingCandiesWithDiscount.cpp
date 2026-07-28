/*
Problem: #2144 - Minimum Cost of Buying Candies With Discount
Platform: LeetCode
Difficulty: Easy
Approach: Greedy + Sorting

Time Complexity: O(n log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(), cost.rend());

        int total = 0;

        for(int i = 0; i < cost.size(); i++){
            // Every third candy is free
            if(i % 3 == 2){
                continue;
            }

            total += cost[i];
        }

        return total;
    }
};
