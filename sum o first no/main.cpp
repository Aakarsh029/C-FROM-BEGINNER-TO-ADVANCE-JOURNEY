#include <iostream>
using namespace std;

void sum(int n)
{
  int summ;
  for(int i=1;i<=n;i++)
  {
    summ+=i;
  }
  cout<<summ;
}

int main() 
{
  int n;
  cout<<"enter the no upto which sum of natural numbers you want to find";
  cin>>n;

  sum(n);
} 