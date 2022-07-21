#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[])
    {
        // code here
        vector<int> inDegree(V,0);
        for(int i = 0 ; i < V ; i++)
        {
            for(auto it : adj[i])
            {
                inDegree[it]++;
            }
        }
        queue<int> q;
        for(int j = 0 ; j < V ; j++)
        {
            if(inDegree[j] == 0)
            {
                q.push(j);
            }
        }
        int cnt = 0;
        while(!q.empty())
        {
            int front = q.front();
            q.pop();
            cnt++;
            
            for(auto kt : adj[front])
            {
                inDegree[kt]--;
                if(inDegree[kt] == 0)
                {
                    q.push(kt);
                }
            }
        }
        if(cnt<V)
        {
            return true;
        }
        else return false;
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
