#include<bits/stdc++.h>
#include<iostream>
using namespace std;

char* reverse(char *s , int len)
{
	int i = 0;
	stack<char> st;
	while(len--)
	{
		st.push(s[i]);
		i++;
	}
	i = 0; 
	while(!st.empty())
	{
		s[i] = st.top();
		st.pop();
		i++;
	}
	return s;
}
int main()
{
	long long int t;
	cin>>t;
	char str[1000];
	while(t--)
	{
		cin>>str;
		long long int len = strlen(str);
		char *ch = reverse(str,len);
		for(int i = 0 ; i < len ; i++)
		{
			cout<<ch[i];
		}
		cout<<endl;
	}
	return 0;
}
