#include<iostream>
using namespace std;

void diamond(int n)
{
    int k = 2 * n - 2;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < k; j++)
        {
            cout << " ";
            
        }
        k--;
        for (int j = 0; j <= i; j++)
        {
            cout << "# ";
        }
        cout << endl;
    }
    for (int i = n; i > 0; i--) 
    {
        for (int j = k+1; j > 0; j--)
        {
            cout << " ";
            
        }
        k++;
        for (int j = i-1; j > 0; j--)
        {
            cout << " #";
        }
        cout << endl;
    }
}
 
int main()
{
    int n;
    cout<<"Enter : ";
    cin>>n;
    diamond(n);
    return 0;
}
