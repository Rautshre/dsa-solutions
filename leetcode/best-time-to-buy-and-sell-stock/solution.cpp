class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int>gre(n, 0);

        int maxi = prices[n-1];
        for(int i=n-2; i>=0; i--){
            gre[i] = max(maxi, gre[i+1]);
            maxi = max(maxi, prices[i]);
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            ans = max(ans, (gre[i] - prices[i]));
        }
        return ans;
    }
};