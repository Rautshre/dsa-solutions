class Solution {
public:

    int findDR(int n){
        int small = 9, large = 0;
        while(n!=0){
            int t = n%10;
            small = min(small, t);
            large = max(large, t);
            n/=10;
        }
        return large-small;
    }
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>mpp;
        int maxi = -1;
        for(auto it: nums){
            int dr = findDR(it);
            maxi = max(maxi, dr);
            mpp[it] = dr;
        }
        int sum = 0;
        for(auto it: nums){
            if(mpp[it]==maxi) sum+=it;
        }
        return sum;
    }
};