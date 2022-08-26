#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s1,s2,s3;
    cout<<"enter no of elements you want to see in first array"<<endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s1.insert(a[i]);
    }
    cout<<"enter no of elements you want to see in second array"<<endl;
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        s2.insert(b[i]);
    }
    cout<<"NOW WE WILL SEE THE UNION OF THE ARRAYS"<<endl;
    for(int i=0;i<n;i++)
    {
        s3.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        
        s3.insert(b[i]);
    }    
    int z=s3.size();
    cout<<"the no of elements in your new set after union"<<z<<endl;
    cout<<"the union of 2 arrays"<<endl;
    for(auto it=s3.begin();it!=s3.end();it++)
    cout<<*it<<" ";
    cout<<endl;
}