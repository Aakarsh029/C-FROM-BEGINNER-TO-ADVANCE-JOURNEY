#include<iostream>
#include<unordered_set>
using namespace std;
int count_distinct(int a[], int n)
{
    unordered_set<int> set;
    
    for (int i = 0; i < n; i++) {
 
        
        if (set.find(a[i]) == set.end()) {
            set.insert(a[i]);
            
        }
    }
 
    return set.size();
}
int main()
{
    unordered_set<int> s;
    cout<<"enter no of elements you want to see in array"<<endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    int z=count_distinct(a,n);
    cout<<"Distinct elements = "<<z<<endl;
    if(s.find(1)==s.end())
    {
        cout<<"not found"<<endl;
    }
    else
    cout<<"found"<<endl;
    for(auto it=s.begin();it!=s.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    s.erase(1);
    for(auto it=s.begin();it!=s.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    cout<<s.size()<<endl;
    if(s.count(9)==0)
    cout<<"not present"<<endl;
    else
    cout<<"present"<<endl;    
}