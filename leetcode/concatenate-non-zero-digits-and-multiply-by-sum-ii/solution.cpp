class Solution {
public:
    int MOD = 1e9 + 7;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {

        int n = s.size();

        vector<pair<long long,long long>> pre(n);
        vector<int> sz(n);

        vector<long long> p10(n + 1);
        p10[0] = 1;
        for(int i = 1; i <= n; i++)
            p10[i] = (p10[i-1] * 10) % MOD;

        int len = 0;

        for(int i = 0; i < n; i++){

            if(s[i] != '0'){

                long long prevNo = 0;
                long long prevSum = 0;

                if(i){
                    prevNo = pre[i-1].first;
                    prevSum = pre[i-1].second;
                }

                pre[i].first =
                    (prevNo * 10 + (s[i]-'0')) % MOD;

                pre[i].second =
                    (prevSum + (s[i]-'0')) % MOD;

                len++;
                sz[i] = len;
            }
            else{

                if(i){
                    pre[i] = pre[i-1];
                    sz[i] = sz[i-1];
                }
                else{
                    pre[i] = {0,0};
                    sz[i] = 0;
                }
            }
        }

        vector<int> ans;

        for(auto &q : queries){

            int l = q[0];
            int r = q[1];

            long long prevSum = 0;
            long long prevNo = 0;
            int digits = sz[r];

            if(l){
                prevSum = pre[l-1].second;
                prevNo = pre[l-1].first;
                digits -= sz[l-1];
            }

            long long sum =
                (pre[r].second - prevSum + MOD) % MOD;

            long long number =
                (pre[r].first -
                 (prevNo * p10[digits]) % MOD
                 + MOD) % MOD;

            ans.push_back((sum * number) % MOD);
        }

        return ans;
    }
};