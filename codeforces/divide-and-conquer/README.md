# Divide and Conquer

**Platform:** Codeforces
**Link:** https://codeforces.com/contest/2241/problem/A
**Language:** 381475210
**Difficulty:** Unknown
**Topic Tags:** `greedy`, `math`, `number theory`, `*800`

## Problem Statement

A. Divide and Conquertime limit per test1 secondmemory limit per test256 megabytesinputstandard inputoutputstandard outputYou are given two positive integers $$$x$$$ and $$$y$$$.You are allowed to perform the following operation any number of times (possibly zero): Choose any positive integer $$$z$$$ such that $$$z$$$ divides $$$x$$$; Set $$$x := \frac{x}{z}$$$. Determine whether you can make $$$x$$$ exactly equal to $$$y$$$ using this operation.InputThe first line of the input contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The description of each test case follows.The only line of each test case contains two space-separated integers $$$x$$$ and $$$y$$$ ($$$1 \le x, y \le 100$$$).OutputFor each test case, print "YES" if you can make $$$x$$$ exactly equal to $$$y$$$ and "NO" otherwise.You can output "YES" and "NO" in any case (for example, strings "yEs", "yes" and "Yes" will be recognized as a positive response).ExampleInput312 26 799 79OutputYESNONONoteFor the first test case, Choosing $$$z = 2$$$ makes $$$x = \frac{12}{2} = 6$$$ Choosing $$$z = 3$$$ makes $$$x = \frac{6}{3} = 2$$$ Thus, we can make $$$x = y$$$. Hence, output YES.For the second test case, it can be shown that it is impossible to make $$$x$$$ equal to $$$y$$$.

## Stats (from Codeforces)

- **runtime:** 31 ms
- **memory:** 0 KB

---
_revision Notes by DSA AutoCommit._
