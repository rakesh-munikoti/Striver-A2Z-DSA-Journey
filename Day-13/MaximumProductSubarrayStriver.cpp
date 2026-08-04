/*
===============================================================================
Problem: Maximum Product Subarray (#152)
Platform: LeetCode / Striver A2Z DSA Sheet (Hard Arrays)

Approaches Explored:
1. Brute Force (Generate all subarrays)
2. Prefix Product + Suffix Product (Optimal)

Pattern Learned:
- Prefix Product
- Suffix Product
- Kadane's Variant for Product
- Zero Handling

Approach:
1. Traverse from left to right while maintaining a prefix product.
2. Traverse from right to left while maintaining a suffix product.
3. Reset the running product to 1 whenever it becomes 0.
4. Update the maximum product using both prefix and suffix products.

Time Complexity: O(n)
Space Complexity: O(1)

Key Learnings:
- Unlike Maximum Sum Subarray, products are affected by negative numbers.
- Traversing from both directions ensures subarrays formed after removing a bad prefix or bad suffix are considered.
- Resetting the running product after encountering zero allows a new subarray to begin.
- Initialize the answer with INT_MIN to correctly handle arrays containing only negative values.

Date: Day 13 of Striver A2Z Journey
===============================================================================
*/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //BRUTE FORCE
        // int product = INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     int temp = 1;
        //     for(int j=i;j<nums.size();j++){
        //         temp = temp*nums[j];
        //         product = max(product,temp);
        //     }
        // }
        // return product;

        //OPTIMAL APPROACH
        int result = INT_MIN;
        int prefix = 1;
        int suffix = 1;
        int i = 0;
        int j = nums.size()-1;
        while(i < nums.size() && j >= 0){
            if(prefix == 0){
                prefix = 1;
            }
            if(suffix == 0){
                suffix = 1;
            }
            prefix = prefix*nums[i];
            suffix = suffix*nums[j];
            result = max(result,max(prefix,suffix));
            i++;
            j--;
        }
        return result;
    }
};
