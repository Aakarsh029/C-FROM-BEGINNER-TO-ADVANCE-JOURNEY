#include<iostream>
using namespace std;
bool pairsum(int a[],int n,int key)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        if(a[low]+a[high]==key)
        {
            cout<<"index of 1st element="<<low<<endl<<"index of 2nd element="<<high<<endl;
            return true;
        }
        else
        if(a[low]+a[high]>key)
        {
            high--;
        }
        else
        {
            low++;
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