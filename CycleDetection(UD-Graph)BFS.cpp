#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#include<queue>
#include<unordered_map>
using namespace std;
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCyclic(int src,vector<int>adj[],vector<bool> &visited)
    {
        unordered_map<int,int> parent;
        parent[src] = -1;
        visited[src] = true;
        queue<int> q;
        q.push(src);
        
        while(!q.empty())
        {
            int front = q.front();
            q.pop();
            for(int  i = 0 ; i < adj[front].size() ; i++)
            {
                int neighbor = adj[front][i];
                if(visited[neighbor] == true && neighbor != parent[front])
                {
                    return true;
                }
                else if(!visited[neighbor])
                {
                    q.push(neighbor);
                    visited[neighbor] = true;
                    parent[neighbor] = front;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) 
    {
        // Code here
        vector<bool> visited(V,false);
        for(int i = 0 ; i < V ; i++)
        {
            if(visited[i] == false)
            {
                bool ans = isCyclic(i,adj,visited);
                if(ans == true)
                {
                    return 1;
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends
