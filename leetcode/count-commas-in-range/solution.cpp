class Solution {
public:
    int countCommas(int n) {
        int cnt = 0;
        if(n>999 && n<=100000){
            cnt+= (n-999);
        }
        return cnt;
    }
};