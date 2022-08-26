#include<bits/stdc++.h>
using namespace std;
int fifo(vector<int> v,int frames){
   vector<int> q(frames,-1);
   int front=0,i=0,pgFlt=0,back=0;
    while(i < v.size()){
        if(find(q.begin(),q.end(),v[i])==q.end()){
            if(back<frames){
                q[back]=v[i];  
                back++;
            }else{
                q[front]=v[i]; 
                front++; 
                if(front==frames)
                    front=0;
            }
            pgFlt++;
        }
        i++;
    }
    return pgFlt;
}

int main(){
    vector<int> v;
    int ttlRq;cin>>ttlRq;
    for (int i = 0; i < ttlRq; i++)
    {
        int x;cin>>x;
       v.push_back(x);
    }
    int frames;
    cin>>frames;
    cout<<"Page faults = "<<fifo(v,frames);
}
