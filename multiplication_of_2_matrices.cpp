#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<" enter no of rows and columns you want in your first 2d array"<<endl;
    cin>>n>>m;
    int a[n][m];
    cout<<"enter the elements of your 2d array"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int p;
    cout<<" enter no of  columns you want in your second 2d array"<<endl;
    cin>>p;
    int b[m][p];
    cout<<"enter the elements of your 2d array"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"your first 2d array="<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"your second 2d array="<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    int c[n][p];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            c[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            for(int k=0;k<m;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];                
            }
        }
    }
    cout<<"your resultant array="<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}