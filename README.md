# 📘 LeetCode DSA Revision Repository

Welcome to my personal LeetCode submissions and revision repository. 
This is a structured guide to revisiting key Data Structures and Algorithms (DSA) patterns, explained with concepts, pseudocode, and direct links to problems I’ve solved — all in one place.

---

## DSA Patterns Covered

1. [Two Pointer](#1️⃣-two-pointer)
2. [Prefix Sum](#2️⃣-prefix-sum)
3. [Sliding Window](#3️⃣-sliding-window)
4. [Binary Search](#4️⃣-binary-search)
5. [Fast & Slow Pointers (Floyd's Cycle Detection)](#5️⃣-fast--slow-pointers-floyds-cycle-detection)
6. [Merge Intervals](#6️⃣-merge-intervals)
7. [Stack (Monotonic Stack / Infix-Postfix)](#7️⃣-stack-monotonic-stack--infix-postfix)
8. [BFS / DFS](#8️⃣-bfs--dfs)
9. [Backtracking](#9️⃣-backtracking)
10. [Dynamic Programming](#🔟-dynamic-programming)
11. [Trie](#11️⃣-trie)
12. [Graphs (Union-Find, Dijkstra, etc.)](#12️⃣-graphs-union-find-dijkstra-etc)
13. [Bit Manipulation](#13️⃣-bit-manipulation)
14. [Heap / Priority Queue](#14️⃣-heap--priority-queue)
15. [Greedy](#15️⃣-greedy)
16. [Topological Sort](#16️⃣-topological-sort)
17. [Segment Tree](#17️⃣-segment-tree)
18. [Binary Indexed Tree (Fenwick Tree)](#18️⃣-binary-indexed-tree-fenwick-tree)

---

## 1️⃣ Two Pointer

**When to Apply Two Pointer ??**
1. Need to find Pair/Triplet/Sum
2. Reverse/Rotate/Sub-array
3. Duplicate Removal/Value Shifting
4. Merge/Range Related
5. Compare both ends of the array to find some relationship

---
   

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

2. **Variation of 2 Pointer**:
    In this method **" i "** tracks the position to update unique or required elements, **" j "** is used to traverse in the array.
   
    **[ This variation is commonly used in the in-place array/vector/list modification problem ]**

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
<div align="right">
  <a href="#dsa-patterns-covered" style="text-decoration:none;">
    <span style="background-color:#e0e0e0; padding:6px 12px; border-radius:5px; font-weight:600; color:#000;">
      🔝 Back to Index
    </span>
  </a>
</div>

                                              
---


## 2️⃣ Prefix Sum

**Concept:**
Basic concept of this is that element at index[i] stores the sum of all the elements from the begining up to index[i] of the original array


**When to Use:**

* Repeated sum calculation over subarrays or ranges
* Finding sums quickly after preprocessing the data
* Problems where you need to know the cumulative effects of elements up to a certain point

**NOTE!** You should not alter the prefixSum array/vector that you have created while solving any problem.

**Pseudocode:**

```cpp
// Preprocessing
vector<int> prefix(n + 1, 0);
for (int i = 0; i < n; ++i)
    prefix[i + 1] = prefix[i] + arr[i];

// Query sum from i to j:
int rangeSum = prefix[j + 1] - prefix[i];
```

**Pseudocode for Matrix:**

```cpp
// Preprocessing
       //Making each row a prefixSum row
        for(int i = 0; i<rows; i++){
            for(int j = 1; j<cols; j++){
               prefixSum[i][j] += prefixSum[i][j-1];
            }
        }

        //Making each col a prefixSum col
        for(int i = 1; i<rows; i++){  
            for(int j = 0; j<cols; j++){
               prefixSum[i][j] += prefixSum[i-1][j];
            }
        }

// Query sum from prefixSum[row1][col1] to prefixSum[row2][col2]:
   int total = prefixSum[row2][col2];
         int top = (row1> 0)?prefixSum[row1-1][col2]:0;
         int left = (col1>0)? prefixSum[row2][col1-1]:0;
         int topLeft = (row1>0 && col1>0)? prefixSum[row1-1][col1-1]:0;

        Sum = total - top -left + topLeft;


```
**🧩 Problems:**

* [Subarray Sum Equals K](./Prefix%20Sum/Subarray%20Sum%20Equals%20K/README.md) ````(Need to use Hashmap along with PrefixSum)````
* [Find Pivot Index](./724-find-pivot-index)
* [Range Sum Query - Immutable](./303-range-sum-query-immutable)
* [Range Sum Query 2D - Immutable](./304-range-sum-query-2d-immutable)
<div align="right">
  <a href="#dsa-patterns-covered" style="text-decoration:none;">
    <span style="background-color:#e0e0e0; padding:6px 12px; border-radius:5px; font-weight:600; color:#000;">
      🔝 Back to Index
    </span>
  </a>
</div>

---

## 3️⃣ Sliding Window
Concept:
The sliding window pattern involves using a window (range of elements) that moves through the array to find subarray-based results. Instead of recomputing the result every time, you reuse previous computations by sliding the window forward.

**There are two types:**
* Fixed-size window (e.g. window of size k)
* Variable-size window (e.g. longest substring with at most k distinct characters)

**When to Use:**
* Continuous subarray or substring problems
* Need to calculate sum, max, or any operation over a range
* Optimizing brute-force subarray solutions
* Problems with "longest", "shortest", "at most", "at least" in sliding ranges




🧮 Fixed-Size Window – Pseudocode
```cpp
int maxSum = 0, windowSum = 0;
for (int i = 0; i < k; i++) {
    windowSum += arr[i];
}
maxSum = windowSum;

for (int i = k; i < arr.size(); i++) {
    windowSum += arr[i] - arr[i - k];
    maxSum = max(maxSum, windowSum);
}

````

🧮 Variable-Size Window – Pseudocode (Longest Substring with K Distinct Chars)
```cpp
int left = 0, maxLen = 0;
unordered_map<char, int> freq;

for (int right = 0; right < s.length(); right++) {
    freq[s[right]]++;

    while (freq.size() > k) {
        freq[s[left]]--;
        if (freq[s[left]] == 0) {
            freq.erase(s[left]);
        }
        left++;
    }

    maxLen = max(maxLen, right - left + 1);
}
````

🧩 Problems:

<div align="right">
  <a href="#dsa-patterns-covered" style="text-decoration:none;">
    <span style="background-color:#e0e0e0; padding:6px 12px; border-radius:5px; font-weight:600; color:#000;">
      🔝 Back to Index
    </span>
  </a>
</div>

