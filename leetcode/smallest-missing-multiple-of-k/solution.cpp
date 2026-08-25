class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>s;
        for(auto it: nums){
            s.insert(it);
        }
        int t = k;
        int i=1;
        while(s.count(t)){
            t = k*i;
            i++;
        }
        return t;
    }
};