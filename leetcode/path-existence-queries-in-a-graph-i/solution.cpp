class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<bool>ans;
        vector<int>par(n);
        par[0] = 0;
        for(int i=1; i<n; i++){
            if(abs(nums[i]-nums[i-1])<=maxDiff){
                par[i] = par[i-1];
            }
            else{
                par[i] = i;
            }
        }

        for(auto it: queries){
            int u = it[0];
            int v = it[1];
            if(par[u]==par[v]){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};