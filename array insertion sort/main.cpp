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
  for(int i=1;i<n;i++)
  {
    int current=a[i];
    int j=i-1;
    while(a[j]>current && j>=0)
    {
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=current;
  }
  cout<<"your sorted array is"<<endl;

  for(int i=1;i<=n;i++)
  {
    cout<<a[i]<<" ";
  }
}