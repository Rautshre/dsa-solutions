# Largest Integer With Given Digit Sum

**Platform:** LeetCode
**Link:** https://leetcode.com/problems/largest-integer-with-given-digit-sum/
**Language:** C++
**Difficulty:** Easy
**Topic Tags:** N/A

## 💡 Intuition

bigger number of size n and sum = s then start with max one digit number i.e 9.

## 🧩 Approach

while n >0, res = (res*10+ min(maxi, s)); and then s -=maxi

## ⏱️ Complexity

- **Time:** O(n)
- **Space:** O(1)

## ⚠️ Edge Cases

easy


## Problem Statement

You are given two non-negative integers n and s.

Return the largest integer that has at most n digits and whose sum of digits is s. If no such integer exists, return -1.

 
Example 1:


Input: n = 2, s = 9

Output: 90

Explanation:

The largest integer with at most 2 digits that has a sum of digits of 9 is 90.


Example 2:


Input: n = 2, s = 19

Output: -1

Explanation:

There is no integer with at most 2 digits that has a sum of digits of 19, so the answer is -1.


Example 3:


Input: n = 5, s = 0

Output: 0

Explanation:

The only non-negative integer whose digits sum to 0 is 0.


 
Constraints:


	1 <= n <= 5
	0 <= s <= 100

## Stats (from LeetCode)

- **runtime:** 0 ms
- **runtimePercentile:** 100.0%
- **memory:** 8.3 MB
- **memoryPercentile:** 53.1%

---
_revision Notes by DSA AutoCommit._
