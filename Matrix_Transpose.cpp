#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		void transpose(vector<vector<int> > &matrix , int n)
		{
			if(n == 0)
			{
				return;
			}
			vector<vector<int> > r (n,vector<int>(n));
			for(int i = 0 ; i < n ; i++)
			{
				for(int j = 0 ; j < n ; j++)
				{
					r[j][i] = matrix[i][j];
				}
			}
			for(int k = 0 ; k < n ; k++)
			{
				for(int l = 0 ; l < n ; l++)
				{
					matrix[k][l] = r[k][l];
				}
			}
		}
};

int main()
{
	int t;
	cin>>t;
	int n;
	cin>>n;
	vector<vector<int> > matrix(n);
	while(t--)
	{
		 for(int i = 0 ; i < n ; i++)
		 {
		 	for(int j = 0 ; j < n ; j++)
		 	{
		 		cin>>matrix[i][j];
			}
		 }
		 Solution s;
		 s.transpose(matrix,n);
		 for(int i = 0 ; i < n ; ++i)
		 {
		 	for(int j = 0 ; j < n ; ++j)
		 	{
		 		cout<<matrix[i][j]<<" ";
			}
		 }
	}
	return 0;
}
