/*
Problem: #374 - Guess Number Higher or Lower
Platform: LeetCode
Difficulty: Easy
Approach: Binary Search

Time Complexity: O(log n)
Space Complexity: O(1)
*/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return       -1 if num is higher than the picked number
 *                1 if num is lower than the picked number
 *                0 if num is correct
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 0;
        int right = n;
        int answer;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(guess(mid) == 0){
                answer = mid;
                break;
            }

            if(guess(mid) == -1){
                right = mid - 1;
            }

            if(guess(mid) == 1){
                left = mid + 1;
            }
        }

        return answer;
    }
};
