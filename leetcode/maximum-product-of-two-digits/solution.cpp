class Solution {
public:
    int maxProduct(int n) {
        priority_queue<int>pq;
        while(n){
            int t = n%10;
            n/=10;
            pq.push(t);
        }
        int res = 1;
        res*=pq.top();
        pq.pop();
        res*=pq.top();
        pq.pop();
        return res;
    }
};