class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        vector<int>vis(n, 0);
        for(int ind =0; ind<n; ind++){
            int t = nums[ind];
            int nxt = (ind+k)%n;
            while(!vis[nxt]){
                int temp = nums[nxt];
                nums[nxt] = t;
                vis[nxt] = 1;
                nxt = (nxt+k)%n;
                t = temp; 
            }
        }
    }
};