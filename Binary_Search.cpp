#include <iostream>  
using namespace std;

int bs(int* a , int l , int h , int key)
{
    int mid;
    if(l==h)
    {
        if(a[l]==key)
        {
            return l;
        }
    }
    else mid=(l+h)/2;
    if(key == a[mid])
    {
        return mid;
    }
    if(key < a[mid])
    {
        return bs(a,l,mid-1,key);
    }
    if(key > a[mid])
    {
        return bs(a,mid+1,h,key);
    }
    else return 0;
}

int main()
{
    int l=1,h;
    int a[10000];
    cout<<"Enter Length of Array : ";
    cin>>h;
    int key;
    for(int i=0;i<h;i++)
    {
        cout<<"Enter : ";
        cin>>a[i];
    }
    cout<<endl;
    cout<<"Enter : ";
    cin>>key;
    cout<<"Key is present at index a["<<bs(a,l,h,key)<<"]";
    return 0;
}
