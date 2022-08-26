#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n ;
    cout<<"enter no of elements you want to see in your array"<<endl;
    cin>>n;
    int a[n];
    int maxsum=INT_MIN;
    cout<<"enter the elements in your array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int currentsum=0;
    for(int i=0;i<n;i++)
    {
        currentsum+=a[i];
        if(currentsum<0)
        currentsum=0;

        maxsum=max(maxsum,currentsum);
    }
    cout<<"maximum sub array sum="<<maxsum<<endl;
}