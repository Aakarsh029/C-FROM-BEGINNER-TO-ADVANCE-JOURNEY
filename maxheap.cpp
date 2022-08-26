#include<iostream>
using namespace std;
void swap(int  a[], int &n1, int &n2)
{
    int temp=a[n1];
    a[n1]=a[n2];
    a[n2]=temp;
}
void insert(int a[],int &n , int value)
{
    n=n+1;
    a[n]=value;
    int i=n;
    while(i>1)
    {
        int parent=i/2;
        if(a[parent]<a[i])
        {
            swap(a,parent ,i);
            i=parent; 
        }
        else
        return;
    }
}
void deletion(int a[],int &n)
{
    a[1]=a[n];
    n=n-1;
    int i=1;
    while(i<n)
    {
        int left=a[2*i];
        int right=a[2*i+1];
        int larger=left>right?2*i:2*i+1;
        if(a[i]<a[larger])
        {
            swap(a,i,larger);
            i=larger;
        }
        else
        return;
    }

}
void max_heap(int *a, int m, int n) {
   int j, t;
   t = a[m];
   j = 2 * m;
   while (j <= n) {
      if (j < n && a[j+1] > a[j])
         j = j + 1;
      if (t > a[j])
         break;
      else if (t <= a[j]) {
         a[j / 2] = a[j];
         j = 2 * j;
      }
   }
   a[j/2] = t;
   return;
}
void build_maxheap(int *a,int n) 
{
   int k;
   for(k = n/2; k >= 1; k--) {
      max_heap(a,k,n);
   }
}
void display(int a[],int n)
{
    for( int i=1;i<=n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cout<<"enter no of elements you want to enter in array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the element of array"<<endl;
    for(int i =1; i<=n;i++)
    cin>>a[i];
    build_maxheap(a,n);
    display(a,n);
    insert(a,n,89);
    display(a,n);
    deletion(a,n);
    display(a,n);
    

}