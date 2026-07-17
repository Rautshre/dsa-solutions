class Solution {
public:
    int n1, n2;
    // int f(int ind1, int ind2, string text1, string text2, vector<vector<int>> &dp){
    //     if(ind1>=n1 || ind2>=n2) return 0;
    //     if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];

    //     int nt = max(f(ind1+1, ind2, text1, text2, dp), f(ind1, ind2+1, text1, text2, dp));
    //     int t=0;
    //     if(text1[ind1]==text2[ind2]){
    //         t = 1+f(ind1+1, ind2+1, text1, text2, dp);
    //     }
    //     return dp[ind1][ind2] = max(t, nt);
    // }
    int longestCommonSubsequence(string text1, string text2) {
        n1 = text1.size(), n2 = text2.size();
        vector<vector<int>>dp(n1+1, vector<int>(n2+1, 0));
        // for(int i=0; i<=n1; i++){
        //     dp[i][0] = 0;
        // }
        // for(int i=0; i<=n2; i++){
        //     dp[0][i] = 0;
        // }

        for(int ind1 = 1; ind1<=n1; ind1++){
            for(int ind2 = 1; ind2<=n2; ind2++){
                if(text1[ind1-1]==text2[ind2-1]){
                    dp[ind1][ind2] = 1+dp[ind1-1][ind2-1];
                }
                else{
                    dp[ind1][ind2] = max(dp[ind1-1][ind2], dp[ind1][ind2-1]);
                }
            }
        }
        return dp[n1][n2];
        // return f(0, 0, text1, text2, dp);
    }
};