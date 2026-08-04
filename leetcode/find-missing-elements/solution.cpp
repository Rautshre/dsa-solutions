class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int st = nums[0], end = nums[n-1];
        vector<int>ans;
        int ind = 0;
        for(int ele = st; ele<=end; ele++){
            if(nums[ind]==ele){
                ind++;
            }
            else{
                ans.push_back(ele);
            }
        }
        return ans;
    }
};