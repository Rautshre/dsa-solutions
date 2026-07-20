class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0, high = n-1;
        int mid;
        while(low<=high){
            mid = low + (high-low)/2;
            if(arr[mid]==target) return mid;
            if(arr[low]<=arr[mid]){
                if(target>=arr[low] && target<arr[mid]){
                    high = mid;
                }
                else{
                    low = mid+1;
                }
            } 
            else{
                if(target>arr[mid] && target<=arr[high]){
                    low = mid+1;
                }
                else{
                    high = mid;
                }
            }
        }
        return -1;
    }
};