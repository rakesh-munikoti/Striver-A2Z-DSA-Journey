/*
------------------------------------------------------------
Pattern    : Prefix Sum
Level      : 1 (Basic Application)
Problem    : LeetCode 1732 - Find the Highest Altitude
Difficulty : Easy

Approach:
- The given array represents the change in altitude between
  consecutive points, not the actual altitude.
- Start with an initial altitude of 0.
- Maintain a running prefix sum to compute the current altitude.
- Track the maximum altitude reached during the traversal.

Time Complexity : O(n)
Space Complexity: O(1)

Learning:
- Learned that Prefix Sum can be maintained using a single
  running variable instead of building a separate prefix array.
- Understood how cumulative sums can represent real-world
  scenarios such as altitude changes.
- Learned to track the maximum value while constructing the
  running prefix sum.

Status: ✅ Completed
------------------------------------------------------------
*/
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maximum = INT_MIN;
        int temp = 0;
        for(int i=0;i<gain.size();i++){
            temp += gain[i];
            maximum = max(maximum,temp);
        }
        if(maximum < 0){
            return 0;
        }
        else{
            return maximum;
        }
    }
};
