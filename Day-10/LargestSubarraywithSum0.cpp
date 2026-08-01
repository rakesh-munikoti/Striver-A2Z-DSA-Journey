/*
===============================================================================
Problem: Largest Subarray with Sum 0
Platform: Striver A2Z DSA Sheet (Hard Arrays)

Approaches Explored:
1. Brute Force
2. Optimal: Prefix Sum + HashMap

Pattern Learned:
- Prefix Sum
- HashMap
- Longest Subarray

Time Complexity: O(n)
Space Complexity: O(n)

Date: Day 10 of Striver A2Z Journey
===============================================================================
*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        //BRUTE FORCE
        // int sum,count;
        // int length = 0;
        // for(int i=0;i<arr.size();i++){
        //     sum = 0;
        //     count = 0;
        //     for(int j=i;j<arr.size();j++){
        //         sum = sum + arr[j];
        //         count++;
        //         if(sum == 0){
        //             length = max(length,count);
        //         }
        //     }
        // }
        // return length;

        //OPTIMAL APPRAOCH
        unordered_map<int,int> mpp;
        int sum = 0;
        int length = 0;
        for (int i=0;i<arr.size();i++) {
            sum = sum + arr[i];
            if(sum == 0){
                length = i+1;
            }
            if(mpp.find(sum) != mpp.end()){
                length = max(length,i-mpp[sum]);
            }
            else{
                mpp[sum] = i;
            }
        }
        return length;
    }
};
