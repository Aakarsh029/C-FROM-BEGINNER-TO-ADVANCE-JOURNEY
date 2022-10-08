#include<iostream>
using namespace std;
int main()
{
    int x;
    for(int i=1;i<=128;i+=i)
    x+=x;
    cout<<x;
}