class Solution {
public:
    int n;
    int f(int ind, vector<int> &nums, vector<int> &dp){
        if(ind>=n) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int t=0;
        int nt = f(ind+1, nums, dp);
        t = nums[ind]+f(ind+2, nums, dp);

        return dp[ind] = max(t, nt);
    }
    int rob(vector<int>& nums) {
        n = nums.size();
        vector<int>dp(n+1, -1);
        return f(0, nums, dp);
    }
};