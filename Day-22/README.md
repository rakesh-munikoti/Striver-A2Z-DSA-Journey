# 📅 Day 22 - Binary Search

## 📚 Today's Progress

### 🔍 Striver A2Z — Binary Search
**Progress: 102/474**

- ✅ Search in Rotated Sorted Array-I
- ✅ Search in Rotated Sorted Array-II
- ✅ Find Minimum in Rotated Sorted Array
- ✅ Find Out How Many Times the Array Is Rotated

---

## 💡 What I Learned

### Search in Rotated Sorted Array-I
- Learned how to identify the sorted half of a rotated array.
- Used Modified Binary Search to achieve `O(log n)` time.

### Search in Rotated Sorted Array-II
- Extended Modified Binary Search to handle duplicate values.
- Learned how to handle the ambiguous case when the left, middle,
  and right elements are equal.

### Find Minimum in Rotated Sorted Array
- Learned how to find the minimum element without explicitly
  finding the rotation point.
- Used the sorted half to eliminate unnecessary elements.

### Find Out How Many Times the Array Is Rotated
- Learned that the index of the minimum element represents the
  number of right rotations.
- Reused the Binary Search approach from the previous problem.

---

## ⏱️ Complexity

- **Search in Rotated Sorted Array-I:** `O(log n)` time, `O(1)` space
- **Search in Rotated Sorted Array-II:** `O(log n)` average, `O(n)` worst case, `O(1)` space
- **Find Minimum in Rotated Sorted Array:** `O(log n)` time, `O(1)` space
- **Find Out How Many Times the Array Is Rotated:** `O(log n)` time, `O(1)` space

---

## 🎯 Key Takeaway

Today's main focus was **Modified Binary Search on Rotated Arrays**.

Instead of finding the rotation point first, I learned how to use
the structure of the rotated array itself to eliminate half of the
search space at each step.

🔥 **Day 22 completed.**
