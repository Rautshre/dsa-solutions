class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>pre(n);
        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            maxi = max(maxi, nums[i]);
            pre[i] = __gcd(maxi, nums[i]);
        }
        sort(pre.begin(), pre.end());
        long long sum=0;
        for(int i=0; i<n/2; i++){
            long long t = __gcd(pre[i], pre[n-1-i]);
            sum+=t;
        }
        return sum;
    }
};