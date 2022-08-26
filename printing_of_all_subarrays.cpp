#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n ;
    cout<<"enter no of elements you want to see in your array"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<a[k];
            }
            cout<<endl;
        }
    }
}