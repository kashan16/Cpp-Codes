#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool CycleDFS(int node , vector<bool> &visited , vector<bool> &dfsvis , vector<int> adj[])
    {
        visited[node] = true;
        dfsvis[node] = true;
        for(auto neighbour : adj[node])
        {
            if(!visited[neighbour])
            {
                bool CycleD = CycleDFS(neighbour,visited,dfsvis,adj);
                if(CycleD)
                {
                    return true;
                }
            }
            else if(dfsvis[neighbour])
                {
                    return true;
                }
        }
        dfsvis[node] = false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) 
    {
        // code here
        vector<bool> visited(V,false);
        vector<bool> dfsvis(V,false);
        
        for(int i = 0 ; i < V ; i++)
        {
            if(!visited[i])
            {
                bool ans = CycleDFS(i,visited,dfsvis,adj);
                if(ans)
                {
                    return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends
