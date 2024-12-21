#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
    int count; 

public:
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        
        vector<vector<int>> adj(n);
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        count = 0; 
        dfs(0, -1, adj, values, k); 
        return count;
    }

private:
    int dfs(int curr, int prev, vector<vector<int>>& adj, vector<int>& values, int k) {
        int sum = 0; 

       
        for (int v : adj[curr]) {
            if (v == prev) continue; 
            sum += dfs(v, curr, adj, values, k); 
        }

        sum += values[curr]; 
        sum %= k; 

        if (sum == 0) {
            count++; 
        }

        return sum; 
    }
};