class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int t = 1;
        int pre = 1, suf = 1;
        for(int i=0; i<n; i++){
            if(pre==0) pre = 1;
            if(suf==0) suf = 1;
            pre *=nums[i];
            suf *=nums[n-i-1];
            maxi = max(maxi, max(pre, suf));
        }
        // for(int i=0; i<n; i++){
        //   t=nums[i];
        //    maxi = max(maxi, t);
        //   for(int j = i+1; j<n; j++){
        //     t*=nums[j];
        //     maxi = max(maxi, t);
        //   }
         

        // }
        return maxi;
    }
};