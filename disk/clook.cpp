#include<bits/stdc++.h>
using namespace std;

int clook(vector<int> v,int head,bool dirc){
    int cylTraverse=-1;
    while(!v.empty()){
        int mx=*max_element(v.begin(),v.end());
        int mn=*min_element(v.begin(),v.end());
       if((head>=mx && dirc) || (head<=mn && !dirc)){
           if(dirc){
               cylTraverse+=abs(head-mn);
               if(find(v.begin(),v.end(),head)!=v.end())
                v.erase(find(v.begin(),v.end(),head));
               head=mn;
           }else{
               cylTraverse+=abs(head-mx);
               if(find(v.begin(),v.end(),head)!=v.end())
                v.erase(find(v.begin(),v.end(),head));
               head=mx;
           }
           
        }
       if(find(v.begin(),v.end(),head)!=v.end())
           v.erase(find(v.begin(),v.end(),head));
       if(dirc)head++;
       else head--;
       cylTraverse++;
    }
    return cylTraverse;
}

int main(){
     vector<int> v;
    int totalCyl;
    cin>>totalCyl;
    for(int i=0;i<totalCyl;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int head;
    cin>>head;
    bool dirc;
    cin>>dirc;
    cout<<"Cylinders traversed:"<<clook(v,head,dirc);
}