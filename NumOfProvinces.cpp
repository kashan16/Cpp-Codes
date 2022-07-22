#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(int src , vector<bool> &visited , vector<vector<int>>v)
    {
        visited[src] = true;
        for(auto x : v[src])
        {
            if(!visited[x])
            {
                dfs(x,visited,v);
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V)
    {
        // code here
        vector<bool> visited(V,false);
        vector<vector<int>> v(V);
        for(int i = 0 ; i < V ; i++)
        {
            for(int j = 0 ; j < adj[0].size() ; j++)
            {
                if(adj[i][j] == 1)
                {
                    v[i].push_back(j);
                    v[j].push_back(i);
                }
            }
        }
        int ct = 0;
        for(int k = 0 ; k < v.size() ; k++)
        {
            if(!visited[k])
            {
                dfs(k,visited,v);
                ct++;
            }
        }
        return ct;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;

        vector<vector<int>> adj;

        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }


        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends
