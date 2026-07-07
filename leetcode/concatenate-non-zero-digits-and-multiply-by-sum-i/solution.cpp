class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0, sum = 0;
        long long u = 1;
        while(n){
            int t = n%10;
            n/=10;
            if(t!=0){
                x = (t*u+x);
                sum+=t;
                u*=10;
            }
            
        }
        return (x)*sum;
    }
};