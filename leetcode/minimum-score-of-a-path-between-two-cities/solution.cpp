class Solution {
public:

    void dfs(int node, vector<int>& vis,
             vector<vector<pair<int,int>>>& adj,
             int &mini){

        vis[node]=1;

        for(auto it:adj[node]){

            mini=min(mini,it.second);

            if(!vis[it.first]){
                dfs(it.first,vis,adj,mini);
            }
        }
    }

    int minScore(int n, vector<vector<int>>& roads) {

        vector<vector<pair<int,int>>> adj(n+1);

        for(auto it:roads){

            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }

        vector<int> vis(n+1,0);

        int mini=INT_MAX;

        dfs(1,vis,adj,mini);

        return mini;
    }
};