#include<iostream>
using namespace std;

int main()
{
  int a[100],n;
  cout<<"enter how many elements you want in array"<<endl;
  cin>>n;
  cout<<"enter the elements of array"<<endl;
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
  }
  cout<<"NOW WE WILL GOING TO SORT YOUR YOUR ARRAY IN ASCENDING ORDER "<<endl;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n-i;j++)
    {
      if(a[j]>=a[j+1])
      {
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
    for(int k=1;k<=n;k++)
    {
      cout<<a[k]<<" ";
    }
    cout<<"\n";
  }
  cout<<"YOUR FINAL SORTED ARRAY=";
  for(int i=1;i<=n;i++)
  cout<<a[i]<<" ";
}