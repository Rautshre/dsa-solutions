class Solution {
public:
    int MOD = 1e9+7;
    int f(int i, string& s, vector<int>& dp){
        if(i==s.length()) return 1;
        if(dp[i]!=-1) return dp[i];
        long long total = 1;
        unordered_set<char>vis;

        for(int j=i; j<s.length(); j++){
            if(!vis.count(s[j])){
                vis.insert(s[j]);
                total = (total+f(j+1, s, dp))%MOD;
            }
        }
        return dp[i] = total;
    }
    int distinctSubseqII(string s) {
        int n = s.size();
        vector<int>dp(n, -1);
        return (f(0, s, dp)-1+MOD)%MOD;
    }
};