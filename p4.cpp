#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        int n;
         int count=0;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++)
        cin>>a[i];
        int max=a[1];
        for(int i=1;i<=n;i++)
        {
            count = count + a[i];
        }

        for(int i=1;i<=n;i++)
        {
            if(max<a[i])
            {
                int temp =max;
                max=a[i];
                a[i]=temp;
            }

        }
       
        

       

        if(max>=count)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    

    }
}