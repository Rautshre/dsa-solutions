class Solution {
public:
    vector<vector<int>>v;
    int n;
    void f(vector<int> &temp, vector<int> &nums, vector<int> &freq){
        if(n==temp.size()){
            v.push_back(temp);
            return ;
        }
        for(int i=0; i<n; i++){
            if(!freq[i]){
                freq[i] = 1;
            temp.push_back(nums[i]);
            f(temp, nums, freq);
            temp.pop_back();
            freq[i] = 0;
          }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        n = nums.size();
        vector<int>temp;
        vector<int>freq(n, 0);
        f(temp, nums, freq);
        return v;
    }
};