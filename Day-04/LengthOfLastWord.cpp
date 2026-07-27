/*
Problem: #58 - Length of Last Word
Platform: LeetCode
Difficulty: Easy
Approach: Reverse String Traversal

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;

        // Skip trailing spaces
        while(i >= 0 && s[i] == ' '){
            i--;
        }

        int count = 0;

        // Count characters of the last word
        while(i >= 0 && s[i] != ' '){
            count++;
            i--;
        }

        return count;
    }
};
