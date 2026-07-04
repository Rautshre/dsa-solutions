class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]] = i;
        }
        for(int i=0; i<nums.size(); i++){
            int t = target-nums[i];
            if(mpp.count(t) && i!=mpp[t]){
                return {i, mpp[t]};
            }
        }
        return {};
    }
};