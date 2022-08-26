#include <iostream>
using namespace std;

int DecimaltoBinary(int n)
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
  return(ans);
}

int BinarytoDecimal(int n)
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
  return(ans);
}

int main() 
{
  int n1,n2;
  cout<<"enter two binary nos you want to add"<<endl;
  cin>>n1>>n2;

  int z=BinarytoDecimal(n1) + BinarytoDecimal(n2);
  int a=DecimaltoBinary(z);
  cout<<"RESULT="<<a<<endl;
  
} 