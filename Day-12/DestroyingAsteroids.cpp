/*
===============================================================================
Problem: Destroying Asteroids (#2126)
Platform: LeetCode

Approach:
1. Sort the asteroids in ascending order.
2. Destroy the smallest asteroid first to maximize the current mass.
3. If the current mass is greater than or equal to the asteroid's mass,
   absorb it and increase the current mass.
4. If any asteroid cannot be destroyed, return false.

Pattern Learned:
- Greedy
- Sorting

Time Complexity: O(n log n)
Space Complexity: O(1)  // Ignoring the space used by sorting

Date: Day 12 of Striver A2Z Journey
===============================================================================
*/
class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long sum = mass;
        for(int i=0;i<asteroids.size();i++){
            if(sum >= asteroids[i]){
                sum += asteroids[i];
            }
            else{
                return false;
            }
        }
        return true;
    }
};
