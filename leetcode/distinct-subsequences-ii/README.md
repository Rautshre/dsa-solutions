# Distinct Subsequences II

**Platform:** LeetCode
**Link:** https://leetcode.com/problems/distinct-subsequences-ii/
**Language:** C++
**Difficulty:** Hard
**Topic Tags:** `String`, `Dynamic Programming`

## 💡 Intuition

calculate distinct subsequences means dp, and something like don't take a dubplicate at same position again. golden rule: At the current position, we can only pick the first occurrence of any unique character. for string aba at 0 ind we can either pick a or b not 2nd a.

## 🧩 Approach

int f(int ind, string& s, vector<int>&dp){
if(ind==n) return 1;
if(dp[ind]!=-1) return dp[ind];
long long total = 1;
unordered_set<char>vis;
run a loop on j=ind to n and is s[j] is not vis add it and total = (total+f(j+1, s, dp))%MOD;
return dp[ind] = total;
}

## ⏱️ Complexity

- **Time:** o(n^2)
- **Space:** O(n)

## ⚠️ Edge Cases

easy


## Problem Statement

Given a string s, return the number of distinct non-empty subsequences of s. Since the answer may be very large, return it modulo 109 + 7.
A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not.
 
Example 1:

Input: s = "abc"
Output: 7
Explanation: The 7 distinct subsequences are "a", "b", "c", "ab", "ac", "bc", and "abc".


Example 2:

Input: s = "aba"
Output: 6
Explanation: The 6 distinct subsequences are "a", "b", "ab", "aa", "ba", and "aba".


Example 3:

Input: s = "aaa"
Output: 3
Explanation: The 3 distinct subsequences are "a", "aa" and "aaa".


 
Constraints:


	1 <= s.length <= 2000
	s consists of lowercase English letters.

## Stats (from LeetCode)

- **runtime:** 850 ms
- **runtimePercentile:** 5.1%
- **memory:** 103.5 MB
- **memoryPercentile:** 5.1%

---
_revision Notes by DSA AutoCommit._
