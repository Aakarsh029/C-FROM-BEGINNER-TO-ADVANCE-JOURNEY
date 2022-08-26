#include <iostream>
using namespace std;

void DecimaltoBinary(int n)
{
  int ans=0;
  int x=1;
  while(n>0)
  {
    int y=n%2;
    ans+=y*x;
    x*=10;
    n/=2;
  }
  cout<<"your BINARY no="<<ans<<endl;
}

int main() 
{
  int n;
  cout<<"enter the decimal no you want to convert in binary"<<endl;
  cin>>n;

  DecimaltoBinary(n);
} 