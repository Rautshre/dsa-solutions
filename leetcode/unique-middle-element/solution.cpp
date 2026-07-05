class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>mpp;
        for(auto it: nums){
            mpp[it]++;
        }
        return mpp[nums[n/2]]==1;
    }
};