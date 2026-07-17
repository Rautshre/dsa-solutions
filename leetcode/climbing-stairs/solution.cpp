class Solution {
public:
    int n;
    int f(int ind, vector<int> &dp){
        if(ind==n) return 1;
        if(ind>n) return 0;
        if(dp[ind]!=-1) return dp[ind];
        
        int os = f(ind+1, dp);
        int ts= f(ind+2, dp);
        return dp[ind] = (ts+os);
    }
    int climbStairs(int m) {
        n = m;
        vector<int>dp(n+1, -1);
        return f(0, dp);
    }
};