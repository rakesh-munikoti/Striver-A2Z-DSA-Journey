/*
Problem: Leaders in an Array
Platform: Striver A2Z
Difficulty: Medium
Approach: Right-to-Left Traversal + Running Maximum

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int i = nums.size() - 1;
        int currentMax = INT_MIN;
        vector<int> result;

        while(i >= 0){
            if(nums[i] > currentMax){
                result.push_back(nums[i]);
                currentMax = nums[i];
            }
            i--;
        }

        reverse(result.begin(), result.end());

        return result;
    }
};
