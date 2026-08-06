# Smallest Divisible Digit Product I

**Platform:** LeetCode
**Link:** https://leetcode.com/problems/smallest-divisible-digit-product-i/
**Language:** C++
**Difficulty:** Easy
**Topic Tags:** `Math`, `Enumeration`

## 💡 Intuition

simple brute force approach, run 2 loops and calculate whatever they asking

## 🧩 Approach

create a function f(int a, int b) inside it define long long res = long long(a*b) and t = __gcd(a, b);
and then return res/t*t;

## ⏱️ Complexity

- **Time:** O(n^2)
- **Space:** O(1)

## ⚠️ Edge Cases

integer overflow handle carefully


## Problem Statement

You are given two integers n and t. Return the smallest number greater than or equal to n such that the product of its digits is divisible by t.

 
Example 1:


Input: n = 10, t = 2

Output: 10

Explanation:

The digit product of 10 is 0, which is divisible by 2, making it the smallest number greater than or equal to 10 that satisfies the condition.


Example 2:


Input: n = 15, t = 3

Output: 16

Explanation:

The digit product of 16 is 6, which is divisible by 3, making it the smallest number greater than or equal to 15 that satisfies the condition.


 
Constraints:


	1 <= n <= 100
	1 <= t <= 10

## Stats (from LeetCode)

- **runtime:** 1 ms
- **runtimePercentile:** 6.7%
- **memory:** 8.6 MB
- **memoryPercentile:** 37.8%

---
_revision Notes by DSA AutoCommit._
