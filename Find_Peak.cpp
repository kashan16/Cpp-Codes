#include<iostream>
using namespace std;

int findPeak(int arr[] , int low , int high , int n)
{
	int mid = low + (high - low)/2;
	if((mid == 0) || (arr[mid-1] <= arr[mid])&&(arr[mid+1] <= arr[mid]))
	{
		return mid;
	}
	
	else if((mid > 0)&&(arr[mid - 1] > arr[mid]))
	{
		return findPeak(arr,low,(mid-1),n);
	}
	else return findPeak(arr,(mid+1),high,n);
}
int main()
{
    int arr[100];
    int n;
    cout<<"Enter : ";
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
    	cin>>arr[i];
	}
	cout<<endl;
    cout<<"Index of a peak point is "<<findPeak(arr,0,n-1,n);
    return 0;
}
