#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
bool vis[N];
vector<int> adj[N];
void dfspreorder(int node)
{
  vis[node]=1;
  cout<<node<<" ";
  vector<int>::iterator it;
  for(it=adj[node].begin();it!=adj[node].end();it++)
    {
      if(!vis[*it])
        dfspreorder(*it);
        
    }
}
void dfspostorder(int node)
{
  vis[node]=1;
  
  vector<int>::iterator it;
  for(it=adj[node].begin();it!=adj[node].end();it++)
    {
      if(!vis[*it])
        dfspostorder(*it);
        
    }
  cout<<node<<" ";
}

int main()
{
  for(int i=0;i<N;i++)
    vis[i]=false;
  int n,m;
  cout<<"enter the no of nodes and edges"<<endl;
  cin>>n>>m;
  int x,y;
  for(int i=0;i<m;i++)
    {
      cin>>x>>y;
      adj[x].push_back(y);
      adj[y].push_back(x);
    }
  dfspreorder(1);
  cout<<endl;
  //dfspostorder(1);
}