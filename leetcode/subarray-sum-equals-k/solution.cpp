class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0; 
        int cnt=0;
        unordered_map<int, int>pre;
        int sum = 0;
        pre[0] = 1;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            if(pre.count(sum-k)){
                cnt+=pre[sum-k];
            }
            pre[sum]++;
        }
        return cnt;
    }
};