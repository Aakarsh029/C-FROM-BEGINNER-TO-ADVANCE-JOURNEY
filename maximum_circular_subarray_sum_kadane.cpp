#include<iostream>
#include<climits>
using namespace std;
int kadane(int a[],int n)
{
    int currentsum=0,maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currentsum+=a[i];
        if(currentsum<0)
        currentsum=0;

        maxsum=max(maxsum,currentsum);
    }
    return maxsum;
}
int main()
{
    int n;
    cout<<"enter no of elements ypu want in your array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of your array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int nonwrap=kadane(a,n),totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum+=a[i];
        a[i]=-a[i];
    }
    int wrapsum=totalsum +kadane(a,n);
    cout<<"maximum circular subarray sum= "<<max(wrapsum,nonwrap)<<endl;
}