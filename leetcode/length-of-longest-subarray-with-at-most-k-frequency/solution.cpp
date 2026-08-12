class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int>mpp;
        int maxi = 1;
        int left =0, right = 0;
        for(right=0; right<n; right++){
            mpp[nums[right]]++;
            while(mpp[nums[right]]>k){
                mpp[nums[left]]--;
                left++;
            }
            maxi = max(maxi, right-left+1);
        }
        return maxi;
    }
};