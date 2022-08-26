#include<bits/stdc++.h>
using namespace std;

int sstf(vector<int> v,int head){
    int cylTraverse=0;
    while(!v.empty()){
        int minIndex=v.size();
        int minValue=1e9;
        for(int i=0;i<v.size();i++){
            if(abs(head-v[i])<minValue){
                minValue=abs(head-v[i]);
                minIndex=i;
            }
        }
        cylTraverse+=minValue;
        head=v[minIndex];
        vector<int>::iterator itr=v.begin()+minIndex;
        v.erase(itr);
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
    cout<<"Cylinders traversed = "<<sstf(v,head);
}