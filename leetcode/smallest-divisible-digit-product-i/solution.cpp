class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans = -1;
        while(ans==-1){
            int num = n;
            int prod = 1;
            while(num>0){
                int d = num%10;
                num/=10;
                prod*=d;
            }
            if(prod%t==0){
                ans=n;
            }
            n+=1;
        }
        return ans;
    }
};