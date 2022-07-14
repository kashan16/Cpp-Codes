#include<iostream>
using namespace std;

void powset(string s , int i , string c)
{
	if(i == s.length())
	{
		cout<<c<<endl;
		return;
	}
	powset(s,i+1,c+s[i]);
	powset(s,i+1,c);
}

int main()
{
	string s1,c1;
	cout<<"Enter string : ";
	cin>>s1;
	powset(s1,0,c1);
	return 0;
}

//O(2^n)
