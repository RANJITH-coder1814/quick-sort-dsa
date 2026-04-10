# 🚀 Quick Sort Algorithm (C++)

This repository contains an implementation of the **Quick Sort** algorithm using C++. It follows the divide-and-conquer approach and is optimized for in-place sorting.

---

## 📌 Problem Statement

Given an array of integers `nums`, sort the array in **non-decreasing order** using the **Quick Sort** algorithm.

---

## 🧠 Approach

Quick Sort works by:

1. Selecting a **pivot element**
2. Partitioning the array into:

   * Elements **less than or equal to pivot**
   * Elements **greater than pivot**
3. Recursively applying the same logic to subarrays

---

## ⚙️ Algorithm Steps

1. Choose the first element as pivot
2. Place pivot at its correct sorted position
3. Recursively sort left and right subarrays

---

## 💻 Code Implementation

```cpp
class Solution {
public:
    int partition(vector<int>& nums, int lb, int ub) {
        int pivot = nums[lb];
        int start = lb;
        int end = ub;

        while (start < end) {
            while (nums[start] <= pivot && start <= ub - 1) start++;
            while (nums[end] > pivot && end >= lb + 1) end--;

            if (start < end) {
                swap(nums[start], nums[end]);
            }
        }

        swap(nums[lb], nums[end]);
        return end;
    }

    void quickSortHelper(vector<int>& nums, int lb, int ub) {
        if (lb < ub) {
            int loc = partition(nums, lb, ub);
            quickSortHelper(nums, lb, loc - 1);
            quickSortHelper(nums, loc + 1, ub);
        }
    }

    vector<int> quickSort(vector<int>& nums) {
        quickSortHelper(nums, 0, nums.size() - 1);
        return nums;
    }
};
```

---

## ⏱️ Time Complexity

| Case       | Complexity |
| ---------- | ---------- |
| Best Case  | O(n log n) |
| Average    | O(n log n) |
| Worst Case | O(n²)      |

---

## 📦 Space Complexity

* **O(log n)** (recursive stack space)

---

## 📊 Example

### Input

```
nums = [7, 4, 1, 5, 3]
```

### Output

```
[1, 3, 4, 5, 7]
```

---

## 📚 Topics Covered

* Recursion
* Divide and Conquer
* Sorting Algorithms

---

## 🌟 Contribute

Feel free to fork this repository and improve the implementation!

---

## 📬 Author

**Ranjith**
