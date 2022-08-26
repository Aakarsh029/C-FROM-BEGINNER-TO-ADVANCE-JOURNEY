#include <iostream>
using namespace std;

void BinarytoDecimal(int n)
{
  int ans=0;
  int x=1;
  while(n>0)
  {
    int y=n%10;
    ans+=x*y;
    x*=2;
    n/=10;
  }
  cout<<"your DECIMAL no="<<ans<<endl;
}

int main() 
{
  int n;
  cout<<"enter the binary no you want to convert in the decimal"<<endl;
  cin>>n;

  BinarytoDecimal(n);
  
} 