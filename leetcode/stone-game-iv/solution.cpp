class Solution {
public:
    int f(int n, int turn, vector<vector<int>>& dp){
        if(n==0)  return dp[turn][n] = 0;
        if(n==1) return dp[turn][n] = 1;
        if(dp[turn][n]!=-1) return dp[turn][n];
        int sqr = sqrt(n);
        int res = 0;
        for(int i=sqr; i>=1; i--){
            int k = n - i*i;
            res = res || !f(k, turn==0?1:0, dp);
        }
        return dp[turn][n] = res;
    }
    bool winnerSquareGame(int n) {
       vector<vector<int>> dp(2, vector<int>(n+1, -1));
       return f(n, 0, dp) == 1;
       
    //    for(int i=1; i<=n; i++){
    //     int sqr = sqrt(i);
    //     if(sqr*sqr == i) dp[i] = true;
    //     else{
    //         dp[i] = !dp[i-1];
    //     }
    //    }
    //    return dp[n];
    }
};