#include <bits/stdc++.h>
using namespace std;

int find(int x, vector<int>& v, int f)
{
    for (int i = 0; i < f; i++)
        if (v[i] == x)
            return 1;
    return 0;
}

int target(int req[], vector<int>& frame, int request, int index, int filled)
{
    int result = -1, far = index;
    for (int i = 0; i < filled; i++) {
        int j;
        for (j = index; j < request; j++) 
        { 
            if (frame[i] == req[j]) 
                { if (j > far) {
                    far = j;
                    result = i;
                }
                break;
            }
        }
        if (j == request)
            return i;
    }
    return (result == -1) ? 0 : result;
}
  
void optimalPage(int req[], int request, int frames)
{
    vector<int> f;
    int pgFlt=request;
    for (int i = 0; i < request; i++) {
        if (find(req[i], f, f.size())) {
            pgFlt--;
            continue;
        }
        if (f.size() < frames){
            f.push_back(req[i]);
        }
        else {
            int pos = target(req, f, request, i + 1, f.size());
            f[pos] = req[i];
        }
        
    }
    cout<<"Page faults = "<< pgFlt<<endl;
}
int main()
{
    int request;
    cin>>request;
    int req[request];
    for(int i=0;i<request;i++)
        cin>>req[i];
    int frames;
    cin>>frames;
    optimalPage(req,request,frames);
}