#include <iostream>
using namespace std;
int deleteelemet(int a[],int n,int key)  
{
  int i;
  for (i=0; i<n; i++)
  {
    if (a[i] == key)
    break;
  }

  if (i < n)
    {
  
      n = n - 1;
      for (int j=i; j<n; j++)
      a[j] = a[j+1];
    }
  return n;
}        
int binary_search(int a[],int n,int key)
{
  int s=0,mid;
 int end=n-1;
 
 while(s<=end)
 {
   mid=(s+end)/2;
   
   if(key==a[mid])
   {
     
     int z=deleteelement(a,n,key);
     cout<<"the position of the element you are finding ="<<mid+1<<"  and also deleted"<<endl;
     return z;
   }
   else
   if(key<a[mid])
    {
      end=mid-1;
    }
   else
     s=mid+1;
   
 }
 return -1;
}  

 
int main()
{
 int n,a[50];
 cout<<"enter no of elemts you want in array less than or equal to 50"<<endl;
 cin>>n;
 cout<<"enter the elements of the array"<<endl;
 for(int i=0;i<n;i++) 
 {
   cin>>a[i];
 }
 cout<<"enter the element you want to search in array and want to delete"<<endl;
 int key;
 cin>>key;
 n=binary_search(a,n,key);

 cout<<"your array is="<<endl;
 for(int i=0;i<n;i++) 
 {
   cout<<a[i]<<endl;
 }
 return 0;
}
 
