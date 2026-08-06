/*
------------------------------------------------------------
Category   : Mathematics (Combinatorics)
Concept    : Binomial Coefficient (nCr)
Problem    : Pascal's Triangle I
Difficulty : Easy

Approach:
- The element at the r-th row and c-th column (1-indexed)
  is equal to C(r-1, c-1).
- Convert the given row and column into:
      n = r - 1
      k = c - 1
- Compute nCr iteratively to avoid factorial overflow.
- Multiply and divide simultaneously to keep the intermediate
  values small.

Formula:
      Pascal(r, c) = C(r-1, c-1)

Time Complexity : O(c)
Space Complexity: O(1)
------------------------------------------------------------
*/
class Solution {
public:
    int pascalTriangleI(int r, int c) {
        int n = r-1;
        int k = c-1;
        long long ans = 1;
        for(int i=1;i<=k;i++){
            ans = ans * (n - i + 1);
            ans = ans / i;
        }
        return ans;
    }
};
