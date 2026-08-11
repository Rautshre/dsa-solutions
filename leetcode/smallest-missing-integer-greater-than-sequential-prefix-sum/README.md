# Smallest Missing Integer Greater Than Sequential Prefix Sum

**Platform:** LeetCode
**Link:** https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/
**Language:** C++
**Difficulty:** Easy
**Topic Tags:** `Array`, `Hash Table`, `Sorting`

## 💡 Intuition

it is very easy problem. just calculate prefix sum till ele are in sequence.

## 🧩 Approach

1) calculate prefix sum till ele are seq
2) add all element in unordered set 
3) run a while loop to check prefix sum is not in set 
4) return ps;

## ⏱️ Complexity

- **Time:** o(n)
- **Space:** o(n)



## Problem Statement

You are given a 0-indexed array of integers nums.

A prefix nums[0..i] is sequential if, for all 1 <= j <= i, nums[j] = nums[j - 1] + 1. In particular, the prefix consisting only of nums[0] is sequential.

Return the smallest integer x missing from nums such that x is greater than or equal to the sum of the longest sequential prefix.

 
Example 1:

Input: nums = [1,2,3,2,5]
Output: 6
Explanation: The longest sequential prefix of nums is [1,2,3] with a sum of 6. 6 is not in the array, therefore 6 is the smallest missing integer greater than or equal to the sum of the longest sequential prefix.


Example 2:

Input: nums = [3,4,5,1,12,14,13]
Output: 15
Explanation: The longest sequential prefix of nums is [3,4,5] with a sum of 12. 12, 13, and 14 belong to the array while 15 does not. Therefore 15 is the smallest missing integer greater than or equal to the sum of the longest sequential prefix.


 
Constraints:


	1 <= nums.length <= 50
	1 <= nums[i] <= 50

## Stats (from LeetCode)

- **runtime:** 2 ms
- **runtimePercentile:** 29.5%
- **memory:** 22.9 MB
- **memoryPercentile:** 64.4%

---
_revision Notes by DSA AutoCommit._
