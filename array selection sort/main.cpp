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
  for(int i=1;i<=n-1;i++)
  {
    for(int j=i+1;j<=n;j++)
    {
      if(a[i]>a[j])
      {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  cout<<"your sorted array="<<endl;
  for(int i=1;i<=n;i++)
  {
    cout<<a[i]<<endl;
  }
}