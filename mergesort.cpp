#include<iostream>
using namespace std;
void merge (int a[],int l , int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a1[n1],b[n2];
    for(int i=0;i<n1;i++)
    {
        a1[i]=a[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=a[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;
    while(i<n1&& j<n2)
    {
        if(a1[i]<b[j])
        {
            a[k]=a1[i];
            k++;
            i++;
        }
        else{
            a[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        a[k]=a1[i];
            k++;
            i++;
    }
    while(j<n2)
    {
       a[k]=b[j];
        k++;
        j++; 
    }
}
void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort( a, l,mid);
        mergesort( a,mid+1 , r);

        merge(a,l,mid,r);
    }
}
int main()
{
    int n;
    cout<<"enter no of elements you want to enter in array";
    cin>>n;
    int a[n];
    cout<<"enter elements of array";
    for(int i=0;i<n;i++)
    cin>>a[i];

    mergesort(a,0,n-1);
    cout<<"sorted array="<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<endl;
}