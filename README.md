# 📘 LeetCode DSA Revision Repository

Welcome to my personal LeetCode submissions and revision repository. 
This is a structured guide to revisiting key Data Structures and Algorithms (DSA) patterns, explained with concepts, pseudocode, and direct links to problems I’ve solved — all in one place.

---

## 🧠 DSA Patterns Covered

1. Two Pointer
2. Prefix Sum
3. Sliding Window
4. Binary Search
5. Fast & Slow Pointers (Floyd's Cycle Detection)
6. Merge Intervals
7. Stack (Monotonic Stack / Infix-Postfix)
8. BFS / DFS
9. Backtracking
10. Dynamic Programming
11. Trie
12. Graphs (Union-Find, Dijkstra, etc.)
13. Bit Manipulation
14. Heap / Priority Queue
15. Greedy
16. Topological Sort
17. Segment Tree
18. Binary Indexed Tree (Fenwick Tree)

---

## 1️⃣ Two Pointer

**Concept:**  
1. **General Method**:
    The general 2 poitner method (with one pointer at the start & another at the end) is used in scenerio where you need to **process or find relationship between elements from both ends of a sorted array or list**

**Pseudocode:**
```cpp
int left = 0, right = arr.size() - 1;
while (left < right) {
    int sum = arr[left] + arr[right];
    if (sum == target)
        return {left, right};
    else if (sum < target)
        left++;
    else
        right--;
}
````

**🧩 Problems:**

* [Two Sum II Input Array is Sorted](./167-two-sum-ii-input-array-is-sorted)
* [3Sum](./15-3sum)
* [3 Sum Closest](./16-3sum-closest)
* [Valid Palindrome](./9-palindrome-number)
* [Squares of a Sorted Array](./1019-squares-of-a-sorted-array)

---

2. **Variation of 2 pointer**:
    In this method **i** tracks the position to update unique or required elements, **j** is used to traverse in the array.
    **This variation is commonly used in the in-place array/vector/list modification problem**

**Pseudocode:**
```cpp
 int i = 0;

       for(int j = 1; j<nums.size(); j++){

        if(nums[j] != nums[i]){
            i++;

            nums[i]=nums[j];
        }
       }
````

**🧩 Problems:**

* [Remove Duplicates from Sorted Array](./26-remove-duplicates-from-sorted-array)
* [Move Zeroes](./283-move-zeroes)
* [Remove Elements](./27-remove-element)
* [Merge Sorted Array](./88-merge-sorted-array)

---


## 2️⃣ Prefix Sum

**Concept:**
Prefix sum is a technique where we precompute cumulative sums for quick subarray sum queries. It transforms O(n²) range queries into O(n).

**When to Use:**

* When you need frequent subarray sum computations
* To detect ranges in constant time

**Pseudocode:**

```cpp
// Preprocessing
vector<int> prefix(n + 1, 0);
for (int i = 0; i < n; ++i)
    prefix[i + 1] = prefix[i] + arr[i];

// Query sum from i to j:
int rangeSum = prefix[j + 1] - prefix[i];
```

**🧩 Problems:**

* [Subarray Sum Equals K](./Prefix%20Sum/Subarray%20Sum%20Equals%20K/README.md)
* [Find Pivot Index](./Prefix%20Sum/Find%20Pivot%20Index/README.md)
* [Range Sum Query - Immutable](./Prefix%20Sum/Range%20Sum%20Query%20-%20Immutable/README.md)
* [Minimum Value to Get Positive Step by Step Sum](./Prefix%20Sum/Minimum%20Value%20to%20Get%20Positive%20Step%20by%20Step%20Sum/README.md)

---


