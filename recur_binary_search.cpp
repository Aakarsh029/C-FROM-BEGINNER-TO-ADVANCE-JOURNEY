#include<iostream>
using namespace std;
int RBS(int a[],int beg,int end ,int item )
{
    int mid=(beg+end)/2;

    if(a[mid]==item)
    {
        return mid;
    }
    else
    if(a[mid]>=item)
    {
        end=mid-1;
        int z=RBS(a,beg,end,item);
    }
    else
    if(a[mid]<=item)
    {
        beg=mid+1;
        int z=RBS(a,beg,end,item);
    }

}

int main()
{
    int n;
    cout<<"enter no of elements you wamt in your array"<<endl;
    cin>>n;
    int a[n];

    cout<<"enter the elements of array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int item;
    cout<<"enter the element you want to search in array"<<endl;
    cin>>item;
    int beg=0;
    int end=n;
    int index=RBS(a,beg,end,item);
    cout<<"the index at which the element is present"<<endl<<index<<endl;
}
