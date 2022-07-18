#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#include<queue>
#include<list>

using namespace std;

class BFS
{
	public:
		void bfs(int v , vector<bool> &visited , vector<int> &ans , vector<int> adj[])
		{
			queue<int> q;
			q.push(v);
			while(!q.empty())
			{
				int front = q.front();
				q.pop();
				visited[front] = true;
				ans.push_back(front);
				for(int i = 0 ; i < adj[front].size() ; i++)
				{
					int child = adj[front][i];
					if(visited[child] = false)
					{
						q.push(child);
						visited[child] = true;
					}
				}
			}
		}
		vector<int> bfsofGraph(int V , vector<int> adj[])
		{
			vector<int> ans;
			vector<bool> visited(V , false);
			bfs(0,visited,ans,adj);
			return ans;
		}
	
};

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int V,E;
		cin>>V>>E;
		
		vector<int> adj[V];
		for(int i = 0 ; i < E ; i++)
		{
			int u , v;
			cin>>u>>v;
			adj[u].push_back(v);
		}
		
		BFS b;
		vector<int> ans = b.bfsofGraph(V,adj);
		for(int j = 0 ; j < ans.size() ; i++)
		{
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
