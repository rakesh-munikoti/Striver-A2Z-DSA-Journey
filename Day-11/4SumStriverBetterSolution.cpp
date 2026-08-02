/*
===============================================================================
Problem: 4 Sum
Platform: Striver A2Z DSA Sheet (Hard Arrays)

Approaches Explored:
1. HashMap + Three Loops (Learning Approach)

Pattern Explored:
- HashMap
- Duplicate Handling
- Index Management

Time Complexity: O(n³)
Space Complexity: O(n)

Note:
This hashing approach is for learning purposes and fails for duplicate-value
edge cases because a HashMap stores only one index for each value. The optimal
solution uses Sorting + Two Pointers.

Date: Day 11 of Striver A2Z Journey
===============================================================================
*/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]] = i;
        }
        set<vector<int>> st;
        for(int i=0;i<nums.size()-3;i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    int check = target - (nums[i]+nums[j]+nums[k]);
                    if(mpp.find(check) != mpp.end() && mpp[check] != i && mpp[check] != j && mpp[check] != k){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        temp.push_back(check);
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
        vector<vector<int>> result(st.begin(),st.end());
        return result;
    }
};
