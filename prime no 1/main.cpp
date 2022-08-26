#include <iostream>
#include <math.h>

using namespace std;

bool is_prime(int num)
{
  for(int i=2;i<=sqrt(num);i++)
  {
    if(num%i==0)
    return false;
  }
  return true;
}
int main() 
{
  int a,b;
  cout<<"enter series in which  you want to check no of primes";
  cin>>a>>b;

  for(int i=a;i<=b;i++)
  {
    if(is_prime(i)==true)
    cout<<i<<endl;

  }
  return 0;
} 