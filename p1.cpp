#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    for(int j=1;j<=m;j++)
    {
    int n;
    cin>>n;
    int a[n],count=0;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n-1;i++)
    {
        if((a[i]+a[i+1])%2 != 0)
        {
            count++;
            i++;
        }
    }
    
    cout<<count<<endl;
    

    }
}