#include <iostream>
using namespace std;

int sum(int n)
{
	if(n == 1)
	{
		return n;
	}
	
	else return (n+sum(n-1));
}

int main()
{
	int a;
	cout<<"Enter : ";
	cin>>a;
	cout<<"Sum : "<<sum(a);
	return 0;
}
