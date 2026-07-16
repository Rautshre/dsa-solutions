class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        unordered_map<int, int>mpp;
        for(int i=0; i<n; i++){
            mpp[numbers[i]] = i;
        }
        for(int i=0; i<n; i++){
            int f = numbers[i];
            if(mpp.count(target-f)){
                if(mpp[target-f]!=i){
                    return {i+1, mpp[target-f]+1};
                }
            }
        }
        return {};
    }
};