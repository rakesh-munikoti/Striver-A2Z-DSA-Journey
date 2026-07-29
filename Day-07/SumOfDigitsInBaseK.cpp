/*
Problem: #1837 - Sum of Digits in Base K
Platform: LeetCode
Difficulty: Easy
Approach: Base Conversion using Division & Modulo

Time Complexity: O(logₖ n)
Space Complexity: O(1)
*/

class Solution {
public:
    int sumBase(int n, int k) {
        int result = 0;
        while(n!=0){
            result += n%k;
            n = n/k;
        }
        return result;
    }
};
