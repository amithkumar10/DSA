Here's a complete `README.md` file structured as a revision document for your LeetCode submissions repository. It includes:

* A **DSA Pattern list** at the top.
* Detailed explanation for **Two Pointer** and **Prefix Sum** patterns.
* Links to problems inside your repo.

You can add more patterns and problem links as your repo grows.

---

````markdown
# 📘 LeetCode DSA Revision Repository

Welcome to my personal LeetCode submissions and revision repository. This is a structured guide to revisiting key Data Structures and Algorithms (DSA) patterns, explained with concepts, pseudocode, and direct links to problems I’ve solved — all in one place.

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
1. **General Method**
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

* [Two Sum](./Two%20Pointer/Two%20Sum/README.md)
* [3Sum](./Two%20Pointer/3Sum/README.md)
* [Container With Most Water](./Two%20Pointer/Container%20With%20Most%20Water/README.md)
* [Valid Palindrome](./Two%20Pointer/Valid%20Palindrome/README.md)
* [Remove Duplicates from Sorted Array](./Two%20Pointer/Remove%20Duplicates%20from%20Sorted%20Array/README.md)

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


