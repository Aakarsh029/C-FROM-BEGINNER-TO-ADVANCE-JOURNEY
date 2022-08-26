#include <iostream>
#include<climits>

using namespace std;

int main() 
{
  int n;

  cout<<"enter no of elements you want in your array"<<endl;
  cin>>n;
  cout<<"enter your elements in array"<<endl;
  int maxno=INT_MIN;
  int minno=INT_MAX;
  int arr[n];
  for(int i=1;i<=n;i++)
  {
      cin>>arr[i];
  }
  
  for(int i=1;i<=n;i++)
  {
    maxno=max(maxno,arr[i]);
    minno=min(minno,arr[i]);
  }

  cout<<"max no="<<maxno<<endl<<"min no="<<minno;
}