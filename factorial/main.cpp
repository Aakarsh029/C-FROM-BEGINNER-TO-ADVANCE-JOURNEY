#include <iostream>
using namespace std;

void fac (int n)
{
  int factorial=1;
  for(int i=1;i<=n;i++)
  {
     factorial=factorial*i; 
  }
  cout<<factorial;
}

int main() 
{
  int n;
  cout<<"enter no of which factorial you want to find out";
  cin>>n;

  fac(n);
} 