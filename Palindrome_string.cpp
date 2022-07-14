#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

bool pal(string s , int l , int r)
{
	if(l>=r)
	{
		return true;
	}
	else if(s[l] != s[r])
	return false;
	return pal(s,l+1,r-1);
}

int main()
{
	string s = "abcbc";
	if(pal(s,0,4) == true)
	{
		cout<<"Palindrome";
	}
	else cout<<"Not Palindrome";
	return 0;
}

