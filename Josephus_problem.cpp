#include<iostream>
using namespace std;

int josephus(int n , int k)
{
	if(n==1)
	{
		return 0;
	}
	return ((josephus(n-1,k) + k)%n);
}

int main()
{
	int a,b;
	cout<<"Enter number of candidates : ";
	cin>>a;
	cout<<"Enter number of skips : ";
	cin>>b;
	cout<<"Person Left at position : "<<josephus(a,b);
	return 0;
}
