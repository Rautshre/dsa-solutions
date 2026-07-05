class Solution {
public:
    int maxArea(vector<int>& height) {
       int area = 0;
       int n = height.size();
       int i=0, j = n-1; 

       while(i<=j){
        if(height[i]>height[j]){
            area = max(area, height[j]*(j-i));
            j--;
        }
        else {
              area = max(area, height[i]*(j-i));
              i++;
        }
       }
       return area;
            
        
    }
};