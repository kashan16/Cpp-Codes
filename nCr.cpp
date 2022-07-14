#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{
	// code here
	int mod = 1000000007;
    int C[r+1];
    memset(C, 0, sizeof(C));
    C[0] = 1; 
    for (int i = 1; i <= n; i++)
	{ 
		for (int j = min(i, r); j > 0; j--)
    	{
			C[j] = (C[j] + C[j-1])%mod;
    	}
    } 
    return C[r]%mod;
}

int main()
{
	int n , r;
	cin>>n>>r;
	cout<<nCr(n,r)<<endl;
	return 0;
}

