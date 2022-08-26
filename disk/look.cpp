#include<bits/stdc++.h>
using namespace std;

int look(vector<int> v,int head,bool dirc){
    int cylTraverse=-1;
    while(!v.empty()){
       if((head>=*max_element(v.begin(),v.end()) && dirc) 
       ||(head<=*min_element(v.begin(),v.end())) && !dirc)
           dirc=!dirc;
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
    cout<<"Cylinder traversed: "<<look(v,head,dirc);
}