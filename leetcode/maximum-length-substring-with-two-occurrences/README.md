# Maximum Length Substring With Two Occurrences

**Platform:** LeetCode
**Link:** https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/
**Language:** C++
**Difficulty:** Easy
**Topic Tags:** `Hash Table`, `String`, `Sliding Window`

## 💡 Intuition

simple sliding window and 2 ptr

## 🧩 Approach

define unordered_map mpp, 2 ptr left and right add mpp[nums[right]]++ while( mpp[nums[right]]>2) { mpp[nums[left]]--; left++} len = max(len, right-left+1);

## ⏱️ Complexity

- **Time:** O(n)
- **Space:** o(n)



## Problem Statement

Given a string s, return the maximum length of a substring such that it contains at most two occurrences of each character.
 
Example 1:


Input: s = "bcbbbcba"

Output: 4

Explanation:
The following substring has a length of 4 and contains at most two occurrences of each character: "bcbbbcba".

Example 2:


Input: s = "aaaa"

Output: 2

Explanation:
The following substring has a length of 2 and contains at most two occurrences of each character: "aaaa".

 
Constraints:


	2 <= s.length <= 100
	s consists only of lowercase English letters.

## Stats (from LeetCode)

- **runtime:** 1 ms
- **runtimePercentile:** 57.7%
- **memory:** 9.8 MB
- **memoryPercentile:** 22.3%

---
_revision Notes by DSA AutoCommit._
