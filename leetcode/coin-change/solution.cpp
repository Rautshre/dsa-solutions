class Solution {
public:
    int n;
    int f(int ind, vector<int> &coins, int amount, vector<vector<int>> &dp){
        if(ind==0){
            if(amount% coins[0]==0) return amount/coins[0];
            return INT_MAX/2;
        }
        if(dp[ind][amount]!=-1) return dp[ind][amount];

        int nt = f(ind-1, coins, amount, dp);
        int t = INT_MAX/2;
        if(coins[ind]<=amount){
            t = 1+f(ind, coins, amount-coins[ind], dp);
        }
        return dp[ind][amount] = min(t, nt);
    }
    int coinChange(vector<int>& coins, int amount) {
        n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, -1));
        int ans = f(n-1, coins, amount, dp);
        if(ans>=INT_MAX/2) return -1;
        return ans;
    }
};