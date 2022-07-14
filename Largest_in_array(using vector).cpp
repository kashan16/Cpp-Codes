#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution
{
	public:
		int largest(vector<int> &arr , int n)
		{
			sort(arr.begin() , arr.end());
			int N = arr.size();
			return arr[N-1];
		}
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> arr(n);
		for(int i = 0 ; i < n ; i++)
		{
			cin>>arr[i];
		}
		Solution ob;
		cout<<ob.largest(arr,n)<<"\n";
	}
	return 0;
}
