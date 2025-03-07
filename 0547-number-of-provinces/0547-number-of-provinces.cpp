class Solution {
public:
    
    void dfs(unordered_map<int, vector<int>> &adj, int u, vector<bool> &visited) {
        visited[u] = true;

        // Visit neighbors
        for (int &v : adj[u]) {
            if (!visited[v]) {
                dfs(adj, v, visited);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n, false);
        unordered_map<int, vector<int>> adj;

        // Construct adjacency list
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1 && i != j) { // Avoid self-loops
                    adj[i].push_back(j);
                }
            }
        }
       
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {  // ✅ Corrected syntax
                dfs(adj, i, visited);
                count++; // ✅ Increment count
            }
        }
        return count;
    }
};
