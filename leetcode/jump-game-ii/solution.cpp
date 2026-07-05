class Solution {
public:
    int n;
     int f(int ind, vector<int> &nums, vector<int> &dp){
        if(ind >= n - 1) return 0;  // Already at or beyond last index
        
        if(dp[ind] != -1) return dp[ind];
        
        int jump = nums[ind];
        int minJumps = INT_MAX/2;
        
        for(int i = 1; i <= jump; ++i){
            if(ind + i < n){
                minJumps = min(minJumps, 1 + f(ind + i, nums, dp));
            }
        } 
        return dp[ind] = minJumps;
    }
    int jump(vector<int>& nums) {
         n = nums.size();
         vector<int> dp(n+1, -1);

         return f(0, nums, dp);

    }
};