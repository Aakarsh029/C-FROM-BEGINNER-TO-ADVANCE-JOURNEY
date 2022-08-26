#include<bits/stdc++.h>
using namespace std;

int fcfs(vector<int> v,int head){
    int i=0,cylTraversed=0;
    while(!v.empty()){
        cylTraversed+=abs(head-v[0]);
        head=v[0];
        v.erase(v.begin());
    }
    return cylTraversed;
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
    cout<<"Cylinders traversed = "<<fcfs(v,head);
}