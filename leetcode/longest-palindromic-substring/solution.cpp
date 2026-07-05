class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        int start = 0, maxlen = 1;
        for(int i=0; i<n; i++){
            dp[i][i] = 1;
        }
        for(int i=0; i<n-1; i++){
            if(s[i]==s[i+1]){
                dp[i][i+1] = 1;
                if(maxlen==1){
                    maxlen = 2;
                    start = i;
                }
            }
        }

        for(int len = 3; len<=n; len++){
            for(int i=0; i<=n-len; i++){
                int j = i+len-1;
                if(s[i]==s[j] && dp[i+1][j-1]){
                    dp[i][j] = 1;
                    if(len>maxlen){
                        maxlen = len;
                        start = i;
                    }
                }
            }
        }
        return s.substr(start, maxlen);
    }
};