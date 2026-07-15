class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int se = 0, so=0;
        int i=1;
        while(i<=2*n){
            if(i%2) so+=i;
            else{
                se+=i;
            }
            i++;
        }
        int ans = __gcd(se, so);
        return ans;
    }
};