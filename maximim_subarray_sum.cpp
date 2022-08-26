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
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=a[k];
            }
            maxsum=max(maxsum,sum);
        }
    }
    cout<<"enter the maximum sum in sub array="<<maxsum<<endl;
}