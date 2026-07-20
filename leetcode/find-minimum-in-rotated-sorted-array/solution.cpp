class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();

        // if(n==2){
        //     return min(nums[0], nums[1]);
        // }
        int low = 0;
        int high = n-1;
        int mid = low + (high-low)/2;
        while(low<high){
            mid = low + (high-low)/2;
            // if(high-low == 1){
            //     return min(nums[high], nums[low]);
            // }
            if(nums[mid]>nums[high]){
                low = mid+1;
            }
            else if(nums[mid]< nums[high]){
                high = mid;
            }
        }
        mid = low + (high-low)/2;
        return nums[mid];
    }
};