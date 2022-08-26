#include <bits/stdc++.h>
using namespace std;

void HexadecimalToDecimal(string n)
{
  int ans=0;
  int x=1,i;
  int s=n.size();
  for( i=s-1;i>=0;i--)
  {
    if(n[i]>='0' &&n[i]<='9')
    {
      ans+=x*(n[i]-'0');
    }
    else
    if(n[i]>='A'&&n[i]<='F')
    {
      ans+=x*(n[i]-'A'+10);
    }

    x*=16;
  }
  cout<<"your decimal ="<<ans<<endl;

}
int main() 
{
  string n;
  cout<<"enter the string of hexadecimal you want to convert in decimal"<<endl;
  cin>>n;
  
  HexadecimalToDecimal(n);
} 