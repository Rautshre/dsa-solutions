class Solution {
public:
    int f(vector<int> &piles, vector<vector<vector<int>>> &dp, int turn, int ind, int m){
        int n = piles.size();
        if(ind==n) return 0;
        if(dp[turn][ind][m]!=-1) return dp[turn][ind][m];
        int res = turn==1?1000000: -1;
        int sc = 0;
        for(int x = 1; x<=min(2*m, n-ind); x++){
            sc+=piles[ind+x-1];
            if(turn==0){
                res = max(res, sc+f(piles, dp, 1, ind+x, max(m, x)));
            }
            else{
                res = min(res, f(piles, dp, 0, ind+x, max(m, x)));
            }
        }
        return dp[turn][ind][m] = res;
    }
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        vector<vector<vector<int>>>dp(2, vector<vector<int>>(n+1, vector<int>(n+1, -1)));

        return f(piles, dp, 0, 0, 1);
    }
};