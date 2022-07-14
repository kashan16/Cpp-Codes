#include <iostream>
using namespace std;

int ways(int n , int m)
{
	if ((n == 1)||(m == 1))
	{
		return 1;
	}
	else return (ways(n-1,m)+ways(n,m-1));
}

int main()
{
	int a,b;
	cout<<"Enter coloum and rows : ";
	cin>>a>>b;
	cout<<"No. of ways : "<<ways(a,b);
	return 0;
}
