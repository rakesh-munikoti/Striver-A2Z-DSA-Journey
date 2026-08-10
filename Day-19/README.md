# 📅 DSA Progress - Binary Search

## 📚 Problems Solved

### 🔹 Striver A2Z - Binary Search Fundamentals
- ✅ Search X in a Sorted Array
- ✅ Lower Bound
- ✅ Upper Bound
- ✅ Search Insert Position
- ✅ Floor and Ceil in a Sorted Array

---

## 📖 Concepts Learned

### Binary Search
- Implemented standard Binary Search on a sorted array.
- Learned how to reduce the search space by half.
- Practiced maintaining `low`, `mid`, and `high`.

### Lower Bound
- Found the first index where `nums[i] >= x`.
- Learned to continue searching left even after finding a valid answer.

### Upper Bound
- Found the first index where `nums[i] > x`.
- Learned to continue searching left for the earliest valid position.

### Search Insert Position
- Used Binary Search to find the position where a target should be inserted.
- Understood how the final `low` and `high` boundaries determine the insertion position.

### Floor and Ceil
- Floor → largest value `<= x`
- Ceil → smallest value `>= x`
- Implemented Floor and Ceil using two separate Binary Searches.
- Practiced using sentinel values such as `INT_MIN` and `INT_MAX`.

---

## 💡 Key Takeaways

- Strengthened the standard Binary Search pattern.
- Understood how small changes in the condition can transform Binary Search into Lower Bound, Upper Bound, Floor, or Ceil.
- Learned the safer midpoint calculation:

`low + (high - low) / 2`

- Improved understanding of how search boundaries move depending on the problem requirement.

---

## ⏱️ Complexity

Standard Binary Search:

- Time: O(log n)
- Space: O(1)

---

🚀 Continuing to strengthen DSA fundamentals through consistent problem solving and implementation.
