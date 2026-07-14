class Solution {
public:
    vector<vector<int>> GCD;
    vector<vector<vector<long long>>> dp;
    int n;
    int MOD = 1e9+7;
    
    int f(int ind, vector<int>& nums, int gcd1, int gcd2){
        if(ind==n){
            return (gcd1==gcd2 && gcd1);
        }
        if(dp[ind][gcd1][gcd2]!=-1) return dp[ind][gcd1][gcd2];

        long long nt = f(ind+1, nums, gcd1, gcd2);

        long long add_seq1 = f(ind+1, nums, ((!gcd1)?nums[ind]: GCD[gcd1][nums[ind]]), gcd2)%MOD;

        long long add_seq2 = f(ind+1, nums, gcd1, ((!gcd2)?nums[ind]: GCD[gcd2][nums[ind]]))%MOD;

        return dp[ind][gcd1][gcd2] = (((nt+add_seq1)%MOD)+add_seq2)%MOD;
    }
    int subsequencePairCount(vector<int>& nums) {
        n = nums.size();
        GCD.resize(201, vector<int>(201, 1));dp.resize(n, vector<vector<long long>>(201, vector<long long>(201, -1)));

        for(int i=0; i<=200; i++){
            for(int j=0; j<=200; j++){
                GCD[i][j] = __gcd(i, j);
            }
        }

        return f(0, nums, 0, 0);
    }
};