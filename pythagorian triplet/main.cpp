#include <iostream>
using namespace std;

void pythagoras(int a,int b,int c)
{
  if(a*a==b*b+c*c)
  cout<<"YES THEY ARE A PYTHAGORAS TRIPLET";
  else 
  cout<<"NO THEY ARE NOT A PYTHAGORAS TRIPLET";
}

void max(int n1,int n2, int n3)
{
  int a,b,c; 
  if(n1>=n2&&n1>=n3)
  {
    a=n1;
    b=n2;
    c=n3;
  }
  else
  if(n2>=n1&&n2>=n3)
  {
    a=n2;
    b=n1;
    c=n3;
  }
  else
  if(n3>=n1&&n3>=n2)
  {
    a=n3;
    b=n1;
    c=n2;
  }

  pythagoras(a,b,c);
}

int main() 
{
  int n1,n2,n3;
  cout<<"enter 3 nos in which you want to check if they are pythagorian triplet or not";
  cin>>n1>>n2>>n3;

  max(n1,n2,n3);
} 