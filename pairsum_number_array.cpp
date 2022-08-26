#include<iostream>
using namespace std;
bool pairsum(int a[],int n,int key)
{
    for(int i =0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==key)
            {
                cout<<i<<" "<<j<<endl;
                return true;
            }
            
        }
    }
    return false;
}
int main()
{
    int n;
    cout<<"enter the no of elements you want to enter in array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of your array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cout<<"enter the no you want to find thatin existing array any 2 nos added can be equal to that number "<<endl;
    cin>>key;
    cout<<pairsum(a,n,key);
}