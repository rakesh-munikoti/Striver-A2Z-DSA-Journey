/*
Problem: Next Permutation
Platform: Striver A2Z
Difficulty: Medium
Approach: Pivot + Swap + Reverse

Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size()-1;
        while(i >= 0){
            if(i == 0){
                int j = nums.size()-1;
                while(i < j){
                    int temp3 = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp3;
                    i++;
                    j--;
                }
                break;
            }
            if(nums[i-1] >= nums[i]){
                i--;
                continue;
            }
            //Next larger number and swap
            int j = nums.size()-1;
            while(j >= i){
                if(nums[j] > nums[i-1]){
                    int temp1 = nums[i-1];
                    nums[i-1] = nums[j];
                    nums[j] = temp1;
                    break;
                }
                j--;
            }
            //Reverse from i to the end & return
            int m = i;
            int n = nums.size()-1;
            while(m < n){
                int temp2 = nums[m];
                nums[m] = nums[n];
                nums[n] = temp2;
                m++;
                n--;
            }
            break;
        }
    }
};
