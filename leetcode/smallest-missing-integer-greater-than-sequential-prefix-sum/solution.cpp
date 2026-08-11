class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        for(auto it: nums) s.insert(it);

        int ps = nums[0];
        for(int i=1; i<n; i++){
            if(nums[i] != nums[i-1]+1) break;
            else{
                ps+=nums[i];
            }
        }
        while(s.count(ps)) ps++;
        return ps;
        
    }
};