class Solution {
public:
    int largestInteger(int n, int s) {
        int res = 0;
        int maxi = 9;
        while(n--){
            int t = s;
            if(s>=maxi){
                t = maxi;
            }
            res = res*10 + t;
            s-=maxi;
            s = max(s, 0);
        }
        if(s!=0) return -1;
        return res;
    }
};