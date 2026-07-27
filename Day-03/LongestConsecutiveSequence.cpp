/*
Problem: Longest Consecutive Sequence
Platform: Striver A2Z
Difficulty: Medium
Approach: HashSet + Start of Sequence

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // BRUTE FORCE
        // if(nums.size() == 0){
        //     return 0;
        // }
        // if(nums.size() == 1){
        //     return 1;
        // }
        // sort(nums.begin(), nums.end());
        // int longest = 0;
        // int i = 0;
        // while(i < nums.size() - 1){
        //     int temp = 1;
        //     while(i < nums.size() - 1 &&
        //          (nums[i + 1] - nums[i] == 1 || nums[i + 1] - nums[i] == 0)){
        //         if(nums[i + 1] - nums[i] == 1){
        //             temp++;
        //         }
        //         i++;
        //     }
        //     longest = max(longest, temp);
        //     i++;
        // }
        // return longest;

        // OPTIMAL APPROACH
        if(nums.size() == 0){
            return 0;
        }

        unordered_set<int> mpp;
        int longest = 1;

        for(int i = 0; i < nums.size(); i++){
            mpp.insert(nums[i]);
        }

        for(auto x : mpp){
            int current = x;

            // Start only if current is the beginning of a sequence
            if(mpp.find(current - 1) == mpp.end()){
                int temp = 1;

                while(mpp.find(current + 1) != mpp.end()){
                    current++;
                    temp++;
                }

                longest = max(longest, temp);
            }
        }

        return longest;
    }
};
