#include<bits/stdc++.h>
using namespace std;

int cscan(vector<int> v,int head,int lastCyl,bool dirc){
    int cylTraverse=-1;
    while(!v.empty()){
       if(find(v.begin(),v.end(),head)!=v.end())
           v.erase(find(v.begin(),v.end(),head));
        if(dirc){
            if(head==lastCyl){
                head=0;
                cylTraverse+=lastCyl;
                continue;
            }
            head++;
        }
        else {
            if(head==0){
                head=lastCyl;
                cylTraverse+=lastCyl;
                continue;
            }
            head--;
        }
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
    cout<<"Cylinder traversed: "<<cscan(v,head,lastCyl,dirc);
}