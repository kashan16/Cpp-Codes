#include<iostream>
using namespace std;

int gcd(int a , int b)
{
	if(b == 0)
	{
		return a;
	}
	else return gcd(b,a%b);
}

void fracSum(int num1 , int den1 , int num2 , int den2)
{
	int n1 = num1*den2 + num2*den1;
	int d1 = den1*den2;
	cout<<n1/gcd(den1,den2)<<"/"<<d1/gcd(den1,den2)<<endl;
}

int main()
{
	int num1 , num2 , den1 , den2;
	cout<<"Enter :";
	cin>>num1>>den1>>num2>>den2;
	fracSum(num1,den1,num2,den2);
	return 0;
}
