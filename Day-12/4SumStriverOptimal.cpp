/*
===============================================================================
Problem: 4 Sum (#18)
Platform: LeetCode / Striver A2Z DSA Sheet (Hard Arrays)

Approaches Explored:
1. HashMap + Three Loops (Learning Approach)
2. Sorting + Two Pointers (Optimal)

Pattern Learned:
- Sorting
- Two Pointers
- Duplicate Handling
- k-Sum Pattern (Extension of 3Sum)

Time Complexity: O(n³)
Space Complexity: O(1)  // Excluding the output array

Key Learnings:
- Extend the 3Sum pattern by fixing two elements.
- Use two pointers to search for the remaining pair.
- Skip duplicates at all four positions to avoid repeated quadruplets.
- Handle integer overflow using long long for intermediate calculations.

Date: Day 12 of Striver A2Z Journey
===============================================================================
*/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // unordered_map<int,int> mpp;
        // for(int i=0;i<nums.size();i++){
        //     mpp[nums[i]] = i;
        // }
        // set<vector<int>> st;
        // for(int i=0;i<nums.size()-3;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         for(int k=j+1;k<nums.size();k++){
        //             int check = target - (nums[i]+nums[j]+nums[k]);
        //             if(mpp.find(check) != mpp.end() && mpp[check] != i && mpp[check] != j && mpp[check] != k){
        //                 vector<int> temp;
        //                 temp.push_back(nums[i]);
        //                 temp.push_back(nums[j]);
        //                 temp.push_back(nums[k]);
        //                 temp.push_back(check);
        //                 sort(temp.begin(),temp.end());
        //                 st.insert(temp);
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>> result(st.begin(),st.end());
        // return result;

        //OPTMAL APPROACH
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for(int i=0;i<nums.size()-3;i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            for(int j=i+1;j<nums.size()-2;j++){
                if(j>i+1 && nums[j] == nums[j-1]){
                    continue;
                }
                int m = j+1;
                int n = nums.size()-1;
                while(m<n){
                    long long check = (long long)target - nums[i] - nums[j];
                    if((long long)nums[m] + nums[n] == check){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[m]);
                        temp.push_back(nums[n]);
                        result.push_back(temp);
                        m++;
                        n--;
                        while(m<n && nums[m]==nums[m-1]){
                            m++;
                        }
                        while(m<n && nums[n]==nums[n+1]){
                            n--;
                        }
                    }
                    else if((long long)nums[m] + nums[n] > check){
                        n--;
                    }
                    else{
                        m++;
                    }
                }
            }
        }
        return result;
    }
};
