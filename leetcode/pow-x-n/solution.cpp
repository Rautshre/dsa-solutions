class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        if(x==1) return 1;
        if(x==-1 && n == -2147483648) return 1.0;
        if(n==INT_MIN) n+=1;
        int m = abs(n);
        
        while(m>0){
            if(m%2==1){
                ans*=x;
                m-=1;
            }
            else{
                m/=2;
               x*=x;
            }
        }
        if(n<0) return 1.0/ans;
        return ans;
    }
};