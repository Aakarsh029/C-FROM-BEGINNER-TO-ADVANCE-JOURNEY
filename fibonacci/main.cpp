#include <iostream>
using namespace std;

void fib(int n)
{
  int t1=0;
  int t2=1,nexterm;

  for(int i=1;i<=n;i++)
  {
    cout<<t1<<endl;
    nexterm=t1+t2;
    t1=t2;
    t2=nexterm;
  }
}

int main() 
{
  int n;
  cout<<"enter no of terms you want of fibonacci series";
  cin>>n;

  fib(n);
} 