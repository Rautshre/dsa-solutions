# Riptide

**Platform:** Codeforces
**Link:** https://codeforces.com/contest/2254/problem/A
**Language:** 386516245
**Difficulty:** Unknown
**Topic Tags:** `implementation`, `sortings`

## 💡 Intuition

very simple problem just create a vec and sort and reverse it

## 🧩 Approach

return min(v[0]-v[1], v[1]-v[2])

## ⏱️ Complexity

- **Time:** o(3)
- **Space:** o(3)



## Problem Statement

A. Riptidetime limit per test1 secondmemory limit per test256 megabytesinputstandard inputoutputstandard outputAlice, Bob, and Charlie are playing a game with tokens. They start with $$$a$$$, $$$b$$$, and $$$c$$$ tokens, respectively.The game is played in rounds. Before the beginning of each round, they check the number of tokens everyone has: If any two players have the exact same number of tokens, the game immediately ends. Otherwise, the round begins, all three players have a strictly different number of tokens. The player with the strictly most tokens gives exactly $$$1$$$ token to the player with the strictly fewest tokens. Given the starting tokens $$$a$$$, $$$b$$$, and $$$c$$$, determine exactly how many rounds the game will last before it ends.InputThe first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^3$$$) — the number of test cases.Each test case consists of a single line containing three integers $$$a$$$, $$$b$$$, and $$$c$$$ ($$$1 \le a, b, c \le 10$$$).OutputFor each test case, output a single integer — the number of rounds the game will last before it ends.ExampleInput61 2 34 6 13 3 71 7 106 1 91 1 1Output120330NoteIn the first test case: No two players have the same number of tokens. Charlie has the most tokens ($$$3$$$ tokens), and Alice has the fewest tokens ($$$1$$$ token). Therefore, Charlie gives Alice a token. Now, Alice has $$$2$$$ tokens, Bob has $$$2$$$ tokens, and Charlie has $$$2$$$ tokens. Since there are two players (or more) with the same number of tokens, the game ends. The game ended after $$$1$$$ round, so the answer is $$$1$$$.In the second test case, the game is played as follows: Bob gives Charlie a token, now Alice has $$$4$$$ tokens, Bob has $$$5$$$ tokens, and Charlie has $$$2$$$ tokens. Bob gives Charlie a token, now Alice has $$$4$$$ tokens, Bob has $$$4$$$ tokens, and Charlie has $$$3$$$ tokens. Since two players have the same number of tokens, the game ends. The game lasted $$$2$$$ rounds.In the third test case, two players already have the same number of tokens. So the answer is $$$0$$$ since no rounds were played.

## Stats (from Codeforces)

- **runtime:** 46 ms
- **memory:** 0 KB

---
_revision Notes by DSA AutoCommit._
