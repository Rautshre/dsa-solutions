class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<int> adj[n];  
        for(auto it : p) {
            adj[it[1]].push_back(it[0]); 
        }
        
        vector<int> indgree(n, 0);
        for(int i = 0; i < n; i++) {
            for(auto it : adj[i]) {
                indgree[it]++;
            }
        }
        
        queue<int> q;
        for(int i = 0; i < n; i++) {
            if(indgree[i] == 0) q.push(i);
        }
        
        vector<int> topo;  // Start with an empty vector
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto it : adj[node]) {
                indgree[it]--;
                if(indgree[it] == 0) q.push(it);
            }
        }
        
        return topo.size() == n; 
    }
};
