/*
===============================================================================
Problem: Maximum Odd Binary Number (#2864)
Platform: LeetCode

Approach:
1. Count the number of '1's and '0's.
2. Place all but one '1' at the beginning.
3. Place all '0's in the middle.
4. Place the remaining '1' at the end to ensure the binary number is odd.

Pattern Learned:
- Greedy
- String Manipulation
- Counting Frequency

Time Complexity: O(n)
Space Complexity: O(n)

Date: Day 12 of Striver A2Z Journey
===============================================================================
*/
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one = 0;
        int zeros = 0;
        string result = "";
        for(int i=0;i<s.size();i++){
            if(s[i] == '1'){
                one++;
            }
            if(s[i] == '0'){
                zeros++;
            }
        }
        if(one == 1){
            int i = 0;
            while(i < zeros){
                result.push_back('0');
                i++;
            }
            result.push_back('1');
        }
        else{
            result.push_back('1');
            int i=0,j=1;
            while(j < one-1){
                result.push_back('1');
                j++;
            }
            while(i < zeros){
                result.push_back('0');
                i++;
            }
            result.push_back('1');
        }
        return result;
    }
};
