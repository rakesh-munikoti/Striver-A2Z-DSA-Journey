# 📅 Day 16 - Prefix Sum & In-Place Array Marking

## 📚 Problems Solved

### 🎯 Striver A2Z
- ✅ Find the Repeating and Missing Number

### 💻 LeetCode
- ✅ 1732 - Find the Highest Altitude
- ✅ 2574 - Left and Right Sum Differences

---

## 📖 Concepts Learned

### Prefix Sum
- Maintained a running prefix sum using a single variable.
- Learned how to derive the right sum from the total sum without constructing a suffix array.
- Applied Prefix Sum to solve cumulative sum and difference-based problems efficiently.
- Reinforced the idea that Prefix Sum is a technique, not just an array.

### In-Place Array Marking
- Learned to use the input array itself as a visited map.
- Understood the concept of **Home Index**:
  - Value `x` → Index `x - 1`
- Used negative marking to detect duplicate elements without extra space.
- Combined mathematical observations with in-place marking to find the missing number.

### Mathematics
- Used the expected sum of numbers from `1` to `n` to derive the missing element after identifying the duplicate.

---

## 💡 Key Takeaways

- Prefix Sum can solve a wide variety of cumulative computation problems with minimal space.
- Constraints can often reveal hidden optimization opportunities, such as using the array itself for marking.
- In-place array marking is a powerful interview technique that avoids additional data structures while maintaining O(1) extra space.

---

⭐ Today's highlight was discovering the **In-Place Array Marking** technique through reasoning and combining it with mathematical observations to solve an O(n), O(1) interview problem.
