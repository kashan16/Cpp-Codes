#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Sum
{
	public:
		int getPairSum(int arr[] , int n , int k)
		{
			unordered_map<int,int>m;
			int c = 0;
			for(int i = 0 ; i < n ; i++)
			{
				int temp = k - arr[i];
				if(m.find(temp) != m.end())
				{
					c+=m[temp];
				}
				m[arr[i]]++;
			}
			return c;
		}
};

int main()
{
	int n;
	cout<<"Enter : ";
	cin>>n;
	Sum s;
	int arr[n];
	for(int i = 0 ; i < n ; i++)
	{
		cout<<"Enter : ";
		cin>>arr[i];
	}
	int k;
	cout<<"Enter : ";
	cin>>k;
	cout<<"\n"<<s.getPairSum(arr,n,k);
	return 0;
}
