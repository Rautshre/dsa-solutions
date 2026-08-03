# Stone Game III

**Platform:** LeetCode
**Link:** https://leetcode.com/problems/stone-game-iii/
**Language:** C++
**Difficulty:** Hard
**Topic Tags:** `Array`, `Math`, `Dynamic Programming`, `Minimax`, `Game Theory`, `Zero-Sum Game`

## 💡 Intuition

this is a dp questioon and only 2 things changes i.e ind and maxDiff so we create a inline function having 2 varible ind and res. if maxDiff > 0 then alice win else Bob or tie at end

## 🧩 Approach

if (index >= n) {
                return 0;
            }
          
            // Return memoized result if already calculated
            if (dp[index] != INT_MAX) {
                return dp[index];
            }
          
            // Initialize the maximum score difference to negative infinity
            int maxScoreDiff = INT_MIN;
            int currentSum = 0;
          
            // Try taking 1, 2, or 3 stones from current position
            for (int take = 0; take < 3 && index + take < n; ++take) {
                // Add the stone value to current sum
                currentSum += stoneValue[index + take];
              
                // Calculate score difference: 
                // current sum - opponent's best score from next position
                // The opponent's score becomes negative because we're maximizing our difference
                maxScoreDiff = max(maxScoreDiff, currentSum - dfs(index + take + 1));
            }
          
            // Memoize and return the result
            dp[index] = maxScoreDiff;
            return dp[index];

## ⏱️ Complexity

- **Time:** O(n)
- **Space:** O(n)



## Problem Statement

Alice and Bob continue their games with piles of stones. There are several stones arranged in a row, and each stone has an associated value which is an integer given in the array stoneValue.

Alice and Bob take turns, with Alice starting first. On each player's turn, that player can take 1, 2, or 3 stones from the first remaining stones in the row.

The score of each player is the sum of the values of the stones taken. The score of each player is 0 initially.

The objective of the game is to end with the highest score, and the winner is the player with the highest score and there could be a tie. The game continues until all the stones have been taken.

Assume Alice and Bob play optimally.

Return "Alice" if Alice will win, "Bob" if Bob will win, or "Tie" if they will end the game with the same score.

 
Example 1:

Input: stoneValue = [1,2,3,7]
Output: "Bob"
Explanation: Alice will always lose. Her best move will be to take three piles and the score become 6. Now the score of Bob is 7 and Bob wins.


Example 2:

Input: stoneValue = [1,2,3,-9]
Output: "Alice"
Explanation: Alice must choose all the three piles at the first move to win and leave Bob with negative score.
If Alice chooses one pile her score will be 1 and the next move Bob's score becomes 5. In the next move, Alice will take the pile with value = -9 and lose.
If Alice chooses two piles her score will be 3 and the next move Bob's score becomes 3. In the next move, Alice will take the pile with value = -9 and also lose.
Remember that both play optimally so here Alice will choose the scenario that makes her win.


Example 3:

Input: stoneValue = [1,2,3,6]
Output: "Tie"
Explanation: Alice cannot win this game. She can end the game in a draw if she decided to choose all the first three piles, otherwise she will lose.


 
Constraints:


	1 <= stoneValue.length <= 5 * 104
	-1000 <= stoneValue[i] <= 1000

## Stats (from LeetCode)

- **runtime:** 48 ms
- **runtimePercentile:** 30.1%
- **memory:** 140.8 MB
- **memoryPercentile:** 55.1%

---
_revision Notes by DSA AutoCommit._
