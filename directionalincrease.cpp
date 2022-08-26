#include <iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    for(int i = 1;i<=m;i++)
    {
        int n;
        cin>>n;
        int b[n];
        for(int j=1;j<=n;j++)
        {
            b[j]=0;
        }
        for(int k=1;k<=n;k++)
        {
            if(b[0]==0)
            {
                b[i]+=1;
            }
        }

    }
}