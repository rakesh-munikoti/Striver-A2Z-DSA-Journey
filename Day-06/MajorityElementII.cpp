/*
Problem: Majority Element II
Platform: Striver A2Z
Difficulty: Hard
Approach: Boyer-Moore Voting Algorithm

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {

        // BETTER SOLUTION
        // unordered_map<int, int> mpp;
        // vector<int> result;
        // for(int i = 0; i < nums.size(); i++){
        //     mpp[nums[i]]++;
        // }
        // for(auto it : mpp){
        //     if(it.second > nums.size() / 3){
        //         result.push_back(it.first);
        //     }
        // }
        // return result;

        // SORTING SOLUTION
        // sort(nums.begin(), nums.end());
        // vector<int> result;
        // int i = 0;
        // while(i < nums.size()){
        //     int prevElement = nums[i];
        //     int count = 0;
        //     while(i < nums.size() && nums[i] == prevElement){
        //         count++;
        //         i++;
        //     }
        //     if(count > nums.size() / 3){
        //         result.push_back(prevElement);
        //     }
        // }
        // return result;

        // OPTIMAL APPROACH
        vector<int> result;

        int element1 = 0;
        int element2 = 0;

        // These counts store confidence, not frequency.
        int count1 = 0;
        int count2 = 0;

        for(int i = 0; i < nums.size(); i++){

            if(nums[i] == element1){
                count1++;
            }
            else if(nums[i] == element2){
                count2++;
            }
            else if(count1 == 0 && nums[i] != element2){
                element1 = nums[i];
                count1 = 1;
            }
            else if(count2 == 0 && nums[i] != element1){
                element2 = nums[i];
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }

        count1 = 0;
        count2 = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == element1){
                count1++;
            }
            if(nums[i] == element2){
                count2++;
            }
        }

        if(count1 > nums.size() / 3){
            result.push_back(element1);
        }

        if(count2 > nums.size() / 3){
            result.push_back(element2);
        }

        return result;
    }
};
