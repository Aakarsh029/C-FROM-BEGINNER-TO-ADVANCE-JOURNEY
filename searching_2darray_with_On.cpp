#include<bits/stdc++.h>
using namespace std;
int32_t main()
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
    cout<<"your first 2d array="<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int key;
    bool found= false;
    cout<<"enter the element you want to search in array"<<endl;
    cin>>key;
     int row=0;
    int column=m-1;
    while(row<n and column>=0)
    {
        if(a[row][column]==key)
        {
            found=true;
            break;
        }
        else
        if(a[row][column]<key)
        {
           // cout<<"row="<<row<<endl;
            row++;
        }
        else
        {
            // cout<<"column="<<column<<endl;
            column--;
        }
    }
  
    if(found)
    cout<<"element found"<<endl;
    else
    cout<<"element no found"<<endl;
}