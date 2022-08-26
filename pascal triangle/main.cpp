#include <iostream>
using namespace std;

int fac (int n)
{
  int factorial=1;
  for(int i=1;i<=n;i++)
  {
     factorial=factorial*i; 
  }
  return(factorial);
}

int main() 
{
  int n;
  cout<<"enter no of lines you want in pascal triangle";
  cin>>n;

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<fac(i)/(fac(j)*fac(i-j))<<" ";
    }
    cout<<endl;
  }
} 