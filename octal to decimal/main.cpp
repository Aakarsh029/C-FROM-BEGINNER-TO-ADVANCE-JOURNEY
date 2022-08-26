#include <iostream>
using namespace std;

void OctaltoDecimal(int n)
{
  int ans=0;
  int x=1;
  while(n>0)
  {
    int y=n%10;
    ans+=x*y;
    x*=8;
    n/=10;
  }
  cout<<"your DECIMAL no="<<ans<<endl;
}

int main() 
{
  int n;
  cout<<"enter the OCTAL no you want to convert in the decimal"<<endl;
  cin>>n;

  OctaltoDecimal(n);
  
}  