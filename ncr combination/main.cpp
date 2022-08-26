#include <iostream>
using namespace std;

void combination (int n1, int n2)
{
  int factorial1=1;
  int factorial2=1;
  int factorial3=1;
  for(int i=1;i<=n1;i++)
  {
     factorial1=factorial1*i; 
  }
  for(int i=1;i<=n2;i++)
  {
     factorial2=factorial2*i; 
  }for(int i=1;i<=(n1-n2);i++)
  {
     factorial1=factorial1*i; 
  }
  int c=factorial1/(factorial2*factorial3);
  cout<<c;
}

int main() 
{
  int n1,n2;
  cout<<"enter no of pair of which combination you want to find out in which first no you enter should be greater than second no";
  cin>>n1>>n2;

  combination(n1,n2);
} 