# Count Commas in Range

**Platform:** LeetCode
**Link:** https://leetcode.com/problems/count-commas-in-range/
**Language:** C++
**Difficulty:** Easy
**Topic Tags:** `Math`

## 💡 Intuition

simple easy just cnt = n-999 ;

## 🧩 Approach

cnt = n-999;

## ⏱️ Complexity

- **Time:** O(1)
- **Space:** O(1)

## ⚠️ Edge Cases

none


## Problem Statement

You are given an integer n.

Return the total number of commas used when writing all integers from [1, n] (inclusive) in standard number formatting.

In standard formatting:


	A comma is inserted after every three digits from the right.
	Numbers with fewer than 4 digits contain no commas.


 
Example 1:


Input: n = 1002

Output: 3

Explanation:

The numbers "1,000", "1,001", and "1,002" each contain one comma, giving a total of 3.


Example 2:


Input: n = 998

Output: 0

Explanation:

All numbers from 1 to 998 have fewer than four digits. Therefore, no commas are used.


 
Constraints:


	1 <= n <= 105

## Stats (from LeetCode)

- **runtime:** 0 ms
- **runtimePercentile:** 100.0%
- **memory:** 8.6 MB
- **memoryPercentile:** 15.5%

---
_revision Notes by DSA AutoCommit._
