/*
------------------------------------------------------------
Category   : Arrays
Pattern    : Prefix Product / Suffix Product
Problem    : LeetCode 238 - Product of Array Except Self
Difficulty : Medium

Approach:
- Use the result array to store the product of all elements
  to the left of each index.
- Traverse the array from right to left while maintaining
  a single running right product.
- Multiply the stored left product by the running right
  product to obtain the product of all elements except
  the current element.
- No division is used, so the solution works correctly
  even when the array contains zero.

Time Complexity : O(n)
Space Complexity: O(1) extra space
                  (excluding the output array)

Learning:
- Understood that the Prefix Sum idea can be generalized
  into Prefix/Suffix accumulation using multiplication.
- Learned how to handle the Product of Array Except Self
  problem without division.
- Understood how zeros are naturally handled by the
  prefix-product and suffix-product approach.
- Learned to reuse the output array to store prefix
  information and avoid additional arrays.
- Improved the previous O(n) extra-space approach to an
  O(1) extra-space solution.

Status: ✅ Optimal Completed
------------------------------------------------------------
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //BETTER APPROACH        
        // vector<int> leftproduct;
        // int rightproduct[nums.size()];
        // vector<int> ans;
        // int left = 1;
        // int right  = 1;
        // for(int i=0;i<nums.size();i++){
        //     if(i>0){
        //         left = left*nums[i-1];
        //         leftproduct.push_back(left);
        //         continue;
        //     }
        //     leftproduct.push_back(left);
        // }
        // for(int i=nums.size()-1;i>=0;i--){
        //     if(i<nums.size()-1){
        //         right = right*nums[i+1];
        //         rightproduct[i] = right;
        //         continue;
        //     }
        //     rightproduct[i] = right;
        // }
        // for(int i=0;i<nums.size();i++){
        //     ans.push_back(leftproduct[i]*rightproduct[i]);
        // }
        // return ans;

        //OPTIMAL APPROACH
        vector<int> ans;
        int left = 1;
        int j = nums.size()-1;
        int right = 1;
        for(int i=0;i<nums.size();i++){
            if(i>0){
                left = left*nums[i-1];
                ans.push_back(left);
                continue;
            }
            ans.push_back(left);
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(i<nums.size()-1){
                right  = right*nums[i+1];
                ans[j] = ans[j]*right;
                j--;
                continue;
            }
            ans[j] = ans[j]*right;
            j--;
        }
        return ans;
    }
};
