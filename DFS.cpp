#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class DFS
{
	public:
		void dfs(int node , vector<bool> &visited , vector<int> adj[] , vector<int> ans)
		{
			visited[node] = true;
			ans.push_back(node);
			for(auto i : adj[node])
			{
				if(!visited[i])
				{
					dfs(i,visited,adj,ans);
				}
			}
		}
		vector<int> dfsOfGraph(int V , vector<int> adj[])
		{
			vector<bool> visited(V,false);
			vector<int> ans;
			dfs(0,visited,adj,ans);
			return ans;
		}
};

int main()
{
	int V,E;
	cin>>V>>E;
	for(int i = 0 ; i < E ; i++)
	{
		int u,v;
		cin>>u>>v;
		vector<int> adj(V);
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	DFS d;
	vector<int> ans = d.dfsOfGraph(V,adj);
	for(int i = 0 ; i < ans.size() ; i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
