/*
Problem: Count Subarrays with Sum K
Platform: Striver A2Z
Difficulty: Hard
Approach: Prefix Sum + HashMap

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
        unordered_map<int, int> mpp;
        mpp[0] = 1;

        int count = 0;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            int check = sum - k;

            if(mpp.find(check) != mpp.end()){
                count += mpp[check];
            }

            mpp[sum]++;
        }

        return count;
    }
};
