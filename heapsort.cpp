#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
#define v vector<int>

void heapify(v &a, int i ,int n)
{
    int maxidx=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && a[l]>a[maxidx])
    {
        maxidx=l;
    }
    if(r<n && a[r]>a[maxidx])
    {
        maxidx=r;
    }
    if(maxidx != i)
    {
        swap(a[i],a[maxidx]);
        heapify(a,n,maxidx);
    }
}
void heapsort(v &a)
{
    int n= a.size();
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(a,n,i);
    }
    for(int i=n-1;i>0;i--)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}
int main()
{
    int n;
    cout<<"enter no of elements you want in array"<<endl;
    cin>>n;
    v a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    heapsort(a);
    for(int i=0;i<n;i++)
    cout << a[i]<<" ";

}