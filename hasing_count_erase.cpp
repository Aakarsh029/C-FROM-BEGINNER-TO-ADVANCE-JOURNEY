#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
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