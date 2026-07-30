/**
 * 3Sum
 *
 * Solved as part of the Striver A2Z DSA Sheet
 *
 * Approach Evolution:
 * 1. Brute Force - O(n³)
 * 2. Explored HashMap-based approaches
 * 3. Optimal Two Pointer approach after sorting
 *
 * Time Complexity: O(n²)
 * Space Complexity: O(1) (excluding output)
 */

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //BRUTE FORCE O(n3)
        // set<vector<int>> st;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size() && i!=j;j++){
        //         for(int k=j+1;k<nums.size() && i!=k && j!=k;k++){
        //             vector<int> temp;
        //             if(nums[i]+nums[j]+nums[k] == 0){
        //                 temp.push_back(nums[i]);
        //                 temp.push_back(nums[j]);
        //                 temp.push_back(nums[k]);
        //                 sort(temp.begin(),temp.end());
        //                 st.insert(temp);
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>> result(st.begin(),st.end());
        // return result;

        // ATTEMPTED BETTER APPROACH (Incorrect) - Precompute Pair Sums using HashMap
        // unordered_map<int,vector<int>> sums;
        // st<vector<int>> arr;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         vector<int> temp;
        //         temp.push_back(nums[i]);
        //         temp.push_back(nums[j]);
        //         sort(temp.begin(),temp.end());
        //         sums[nums[i]+nums[j]] = temp;
        //     }
        // }
        // for(int i=0;i<nums[i];i++){
        //     int target = -nums[i];
        //     if(sums.find(target) != mpp.end()){
        //         vector<int> temp(sums[target].begin(),sums[target].end());
        //         temp.push_back(nums[i]);
        //         sort(temp.begin(),temp.end());
        //         arr.push_back(temp);
        //     }
        // }
        // vector<vector<int>> result(arr.begin(),arr.end());
        // return result;

        // ATTEMPTED BETTER APPROACH (Rejected) - Find Third Element using HashMap
        // unordered_map<int,int> mpp;
        // st<vector<int> arr;
        // for(int i=0;i<nums.size();i++){
        //     mpp[nums[i]] = i;
        
        // }
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         int target = 0-(nums[i]+nums[j]);
        //         if(mpp.find(target) != mpp.end() && mpp[target] != i && mpp[target] != j){
        //             vector<int> temp;
        //             temp.push_back(nums[i]);
        //             temp.push_back(nums[j]);
        //             temp.push_back(target);
        //             sort(temp.begin(),temp.end());
        //             arr.insert(temp);
        //         }
        //     }
        // }
        // vector<vector<int>> result(arr..begin(),arr.end());
        // return result;

        //OPTIMAL APPROACH
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                break;
            }
            if(i>0 && nums[i-1] == nums[i]){
                continue;
            }
            int target = -nums[i];
            int m = i+1;
            int n = nums.size()-1;
            while(m<n){
                if(nums[m]+nums[n] == target){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[m]);
                    temp.push_back(nums[n]);
                    result.push_back(temp);
                    m++;
                    while(m<n && nums[m-1] == nums[m]){
                        m++;
                    }
                    n--;
                    while(m<n && nums[n+1] == nums[n]){
                        n--;
                    }
                }
                else if(nums[m]+nums[n] > target){
                    n--;
                }
                else{
                    m++;
                }
            }
        }
        return result;
    }
};
