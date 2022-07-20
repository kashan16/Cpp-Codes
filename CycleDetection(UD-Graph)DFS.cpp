#include <bits/stdc++.h>
using namespace std;

class Solution
 {
  public:
    bool CycleDFS(int src , int parent , vector<bool> &visited , vector<int> adj[])
    {
        visited[src] = true;
        for(auto i : adj[src])
        {
            if(!visited[i])
            {
                bool d = CycleDFS(i,src,visited,adj);
                if(d)
                return true;
            }
            else if(i != parent)
            {
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[])
    {
        vector<bool> visited(V,false);
        int parent;
        for(int i = 0 ; i < V ; i++)
        {
           if(visited[i] == false)
           {
                bool ans = CycleDFS(i,-1,visited,adj);
                if(ans == true)
                {
                    return 1;
                }
           }
        }
        return 0;
    }
};


int main()
 {
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
