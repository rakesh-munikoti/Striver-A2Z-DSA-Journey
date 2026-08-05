/*
    Problem: Merge Two Sorted Arrays Without Extra Space
    Platform: Striver A2Z DSA Sheet
    Topic: Arrays, Two Pointers
    Difficulty: Medium

    Approach (Optimal):
    - Use three pointers:
        i -> Last valid element of nums1
        j -> Last element of nums2
        k -> Last index of nums1
    - Compare nums1[i] and nums2[j].
    - Place the larger element at nums1[k].
    - Move the corresponding pointer backward.
    - If any elements remain in nums2, copy them into nums1.

    Time Complexity: O(m + n)
    Space Complexity: O(1)
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //BRUTE FORCE APPROACH
        // int i = m;
        // for(int j=0;j<n;j++){
        //     nums1[i] = nums2[j];
        //     i++;
        // }
        // sort(nums1.begin(),nums1.end());
        // return;

        //OPTIMAL
        int i = m-1;
        int j = n-1;
        int k = nums1.size()-1;
        while(i>=0 && j>=0){
            if(nums1[i] >= nums2[j]){
                nums1[k--] = nums1[i--];
            }
            else{
                nums1[k--] = nums2[j--];
            }
        }
        while(j>=0){
            nums1[k--] = nums2[j--];
        }
        return;
    }
};
