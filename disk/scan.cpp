#include<bits/stdc++.h>
using namespace std;

int scan(vector<int> v,int head,int lastCyl,bool dirc){
    int cylTraverse=-1;
    while(!v.empty()){
       if(find(v.begin(),v.end(),head)!=v.end())
           v.erase(find(v.begin(),v.end(),head));
       if(head==lastCyl || head==0)
           dirc=!dirc;
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
    int lastCyl;
    cin>>lastCyl;
    bool dirc;
    cin>>dirc;
    cout<<"Cylinder traversed: "<<scan(v,head,lastCyl,dirc);
}